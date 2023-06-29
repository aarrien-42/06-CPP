/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/29 14:19:20 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*-CONSTRUCTORES-*/

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe( const PmergeMe& obj ) {
	*this = obj;
}

/*-DESTRUCTOR-*/

PmergeMe::~PmergeMe() {}

/*-SOBRECARGA DE OPERADOR-*/

PmergeMe& PmergeMe::operator=( const PmergeMe& obj ) {
	_vSequence = obj.getVector();
	return *this;
}

std::ostream& operator<<( std::ostream& os, const PmergeMe& obj ) {
	std::cout << "Vector: ";
	showContainer(obj.getVector());
	std::cout << "Deque:  ";
	showContainer(obj.getDeque());
	return os;
}

/*-MÉTODOS-*/

std::vector<int> PmergeMe::getVector() const { return _vSequence; }

void PmergeMe::vAddNum( int num ) {
	_vSequence.push_back(num);
}

std::deque<int> PmergeMe::getDeque() const { return _dSequence; }

void PmergeMe::dAddNum( int num ) {
	_dSequence.push_back(num);
}

void PmergeMe::sortVector() {
	if (isSorted(_vSequence))
		return ;
	if (_vSequence.size() == 2 && *_vSequence.begin() > *(_vSequence.end() - 1)) {
		std::swap(*_vSequence.begin(), *(_vSequence.end() - 1));
		return ;
	}
	for (std::vector<int>::iterator it = _vSequence.begin(); it < _vSequence.end() - 1; it+=2) {
		if (*it < *(it+1))
			std::swap(*it, *(it+1));
	}
	for (std::vector<int>::iterator it1 = _vSequence.begin(); it1 < _vSequence.end() - 3; it1+=2) {
		for (std::vector<int>::iterator it2 = it1 + 2; it2 < _vSequence.end() - 1; it2+=2) {
			if (*it1 > *(it2)) {
				std::swap(*it1, *it2);
				std::swap(*(it1+1), *(it2+1));
			}
		}
	}
	std::vector<int> b;
	for (std::vector<int>::iterator it = _vSequence.begin(); it < _vSequence.end(); it+=2) {
		(it == _vSequence.end() - 1) ? b.push_back(*it) : b.push_back(*(it+1));
	}
	if (_vSequence.size() % 2)
		_vSequence.erase(_vSequence.end() - 1);
	for (std::vector<int>::iterator it = _vSequence.begin() + 1; it < _vSequence.end(); it++) {
		_vSequence.erase(it);
	}
	for (std::vector<int>::iterator it = b.begin(); it < b.end(); it++) {
		if (it == b.begin())
			_vSequence.insert(_vSequence.begin(), *it);
		else {
			std::vector<int>::iterator in = insertBinarySearch(*it, _vSequence.begin(), _vSequence.end() - 1);
			_vSequence.insert(in, *it);
		}
	}
}

void PmergeMe::sortDeque() {
	if (isSorted(_dSequence))
		return ;
	if (_dSequence.size() == 2 && *_dSequence.begin() > *(_dSequence.end() - 1)) {
		std::swap(*_dSequence.begin(), *(_dSequence.end() - 1));
		return ;
	}
	for (std::deque<int>::iterator it = _dSequence.begin(); it < _dSequence.end() - 1; it+=2) {
		if (*it < *(it+1))
			std::swap(*it, *(it+1));
	}
	for (std::deque<int>::iterator it1 = _dSequence.begin(); it1 < _dSequence.end() - 3; it1+=2) {
		for (std::deque<int>::iterator it2 = it1 + 2; it2 < _dSequence.end() - 1; it2+=2) {
			if (*it1 > *(it2)) {
				std::swap(*it1, *it2);
				std::swap(*(it1+1), *(it2+1));
			}
		}
	}
	std::deque<int> b;
	for (std::deque<int>::iterator it = _dSequence.begin(); it < _dSequence.end(); it+=2) {
		(it == _dSequence.end() - 1) ? b.push_back(*it) : b.push_back(*(it+1));
	}
	if (_dSequence.size() % 2)
		_dSequence.erase(_dSequence.end() - 1);
	for (std::deque<int>::iterator it = _dSequence.begin() + 1; it < _dSequence.end(); it++) {
		if ((_dSequence.end() - it)%2) {
			_dSequence.erase(it);
		}
	}
	for (std::deque<int>::iterator it = b.begin(); it < b.end(); it++) {
		if (it == b.begin())
			_dSequence.insert(_dSequence.begin(), *it);
		else {
			std::deque<int>::iterator in = insertBinarySearch(*it, _dSequence.begin(), _dSequence.end() - 1);
			_dSequence.insert(in, *it);
		}
	}
}
