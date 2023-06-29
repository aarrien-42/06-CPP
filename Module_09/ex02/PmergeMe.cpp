/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/29 14:39:12 by aarrien-         ###   ########.fr       */
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

void PmergeMe::sort( char **av ) {
	for (size_t i = 1; av[i]; i++) {
		vAddNum(std::atof(av[i]));
		dAddNum(std::atof(av[i]));
	}
	std::cout << "BEFORE:\n" << *this << "\n";
	mergeInsertSort(_vSequence);
	mergeInsertSort(_dSequence);
	std::cout << "AFTER:\n" << *this << "\n";
	(isSorted(_vSequence) && isSorted(_dSequence)) ? std::cout << "SUCCESS\n" : std::cout << "FAILURE\n";
}