/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/20 16:43:58 by aarrien-         ###   ########.fr       */
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
	obj.showVector();
	return os;
}

/*-MÉTODOS-*/

std::vector<Pair> PmergeMe::getVector() const { return _vSequence; }

void PmergeMe::addPair( const Pair& p ) {
	_vSequence.push_back(p);
}

void PmergeMe::showVector() const {
	for (std::vector<Pair>::const_iterator it = _vSequence.cbegin(); it < _vSequence.cend(); it++) {
		std::cout << "(" << it->nums[0] << (it->pair ? " " + std::to_string(it->nums[1]) : "") << ") ";
	}
	std::cout << "\n";
}

void PmergeMe::sortVector() {
	for (std::vector<Pair>::iterator it1 = _vSequence.begin(); it1 < _vSequence.end() - 1; it1++) {
		for (std::vector<Pair>::iterator it2 = it1 + 1; it2 < _vSequence.end(); it2++)
		if (it1->pair && it2->pair && it1->nums[0] > it2->nums[0])
			std::swap(it1->nums, it2->nums);
	}
	for (std::vector<Pair>::iterator it1 = _vSequence.begin(); it1 < _vSequence.end() - 1; it1++) {
		int num = it1->nums[1];
		it1->nums[1] = -1;
		for (std::vector<Pair>::iterator it2 = it1; it2 >= _vSequence.begin(); it2--) {
			if (it2 == _vSequence.begin() || it2->nums[0] > num) {
				_vSequence.insert(it2 - 1, Pair(num, -1));
				break;
			}
		}
	}
}
