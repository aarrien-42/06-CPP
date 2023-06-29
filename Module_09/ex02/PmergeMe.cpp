/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/29 15:12:55 by aarrien-         ###   ########.fr       */
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

std::deque<int> PmergeMe::getDeque() const { return _dSequence; }

void PmergeMe::sort( char **av ) {
	clock_t vEndTime, vStartTime, dEndTime, dStartTime;

	// std::vector sort
	vStartTime = clock();
	for (size_t i = 1; av[i]; i++) {
		_vSequence.push_back(std::atof(av[i]));
	}
	mergeInsertSort(_vSequence);
	vEndTime = clock();

	// std::deque sort
	dStartTime = clock();
	for (size_t i = 1; av[i]; i++) {
		_dSequence.push_back(std::atof(av[i]));
	}
	mergeInsertSort(_dSequence);
	dEndTime = clock();

	std::cout << "Before: ";
	for (size_t i = 1; av[i]; i++)
		std::cout << av[i] << " ";
	std::cout << "\n";
	std::cout << "After:  ";
	showContainer(_vSequence);
	std::cout << "Time to process a range of 5 elements with std::vector : " << 1000000.0 * (vEndTime - vStartTime) / CLOCKS_PER_SEC << " us\n";
	std::cout << "Time to process a range of 5 elements with std::deque  : " << 1000000.0 * (dEndTime - dStartTime) / CLOCKS_PER_SEC << " us\n";

	// sorting check
	//(isSorted(_vSequence) && isSorted(_dSequence)) ? std::cout << "SUCCESS\n" : std::cout << "FAILURE\n";
}