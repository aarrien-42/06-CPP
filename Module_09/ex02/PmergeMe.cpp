/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/22 15:01:49 by aarrien-         ###   ########.fr       */
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
	std::vector<int> sequence = obj.getVector();
	for (std::vector<int>::const_iterator it = sequence.cbegin(); it < sequence.cend(); it++) {
		os << *it << " ";
	}
	return os;
}

/*-MÉTODOS-*/

std::vector<int> PmergeMe::getVector() const { return _vSequence; }

void PmergeMe::vAddNum( int num ) {
	_vSequence.push_back(num);
}

std::vector<int>::iterator PmergeMe::insertBinarySearch(int num, std::vector<int>::iterator first, std::vector<int>::iterator last) {
	if (num <= *first)
		return first;
	if (*first < num && *last > num && last - first == 1)
		return first + 1;
	if (*(first+(floor((last-first)/2))) > num)
		first = insertBinarySearch(num, first, first+(floor((last-first)/2)));
	else
		first = insertBinarySearch(num, first+(floor((last-first)/2)), last);
	return first;
}

void PmergeMe::sortVector() {
	//std::cout << "input:      " << *this << "\n"; // PRINT
	for (std::vector<int>::iterator it = _vSequence.begin(); it < _vSequence.end() - 1; it+=2) {
		if (*it < *(it+1))
			std::swap(*it, *(it+1));
	}
	//std::cout << "sort pairs: " << *this << "\n"; // PRINT

	for (std::vector<int>::iterator it1 = _vSequence.begin(); it1 < _vSequence.end() - 3; it1+=2) {
		for (std::vector<int>::iterator it2 = it1 + 2; it2 < _vSequence.end() - 1; it2+=2) {
			if (*it1 > *(it2)) {
				std::swap(*it1, *it2);
				std::swap(*(it1+1), *(it2+1));
			}
		}
	}
	//std::cout << "sort main:  " << *this << "\n"; // PRINT

	std::vector<int> b;
	for (std::vector<int>::iterator it = _vSequence.begin(); it < _vSequence.end(); it+=2) {
		((it+1) < _vSequence.end()) ? b.push_back(*(it+1)) : b.push_back(*it);
	}
	if (_vSequence.size() % 2)
		_vSequence.erase(_vSequence.end() - 1);
	for (std::vector<int>::iterator it = _vSequence.begin() + 1; it < _vSequence.end(); it++) {
		_vSequence.erase(it);
	}
	// PRINT
	//std::cout << "main   :    " << *this << "\n";
	//std::cout << "divided:    ";
	//for (std::vector<int>::iterator it = b.begin(); it < b.end(); it++) {
	//	std::cout << *it << " ";
	//}
	//std::cout << "\n";
	//END PRINT
	for (std::vector<int>::iterator it = b.begin(); it < b.end(); it++) {
		if (it == b.begin())
			_vSequence.insert(_vSequence.begin(), *it);
		else
			_vSequence.insert(insertBinarySearch(*it, _vSequence.begin(), _vSequence.end() - 1), *it);
	}
	// PRINT
	std::cout << "main   :    " << *this << "\n";
	std::vector<int>::iterator it;
	for (it = _vSequence.begin(); it < _vSequence.end()-1; it++) {
		if (*it > *(it+1)) {
			std::cout << "FAILED: " << *it << " > " << *(it+1) << "\n";
			break;
		}
	}
	if (it == _vSequence.end()-1)
		std::cout << "SUCCESS\n";
	//END PRINT
}
