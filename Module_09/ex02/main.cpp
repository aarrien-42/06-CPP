/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:02 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/27 19:35:22 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool validSequence(int size, char **input) {
	if (size == 1)
		return false;
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; input[j][i]; i++) {
			if (!std::isdigit(input[j][i]))
			 return false;
		}
	}
	return true;
}

//                 count|min|max
// ./PmergeMe `jot -r 100 0 5000 | tr '\n' ' '`
int main( int ac, char **av ) {
	if (!validSequence(ac, &av[1])) {
		std::cerr << "Error\n";
		return 1;
	}
	PmergeMe S;

	for (size_t i = 1; av[i]; i++) {
		S.vAddNum(std::atof(av[i]));
		S.dAddNum(std::atof(av[i]));
	}
	std::cout << "BEFORE:\n" << S << "\n";
	S.sortVector();
	S.sortDeque();
	std::cout << "AFTER:\n" << S << "\n";
	(isSorted(S.getVector()) && isSorted(S.getDeque())) ? std::cout << "SUCCESS\n" : std::cout << "FAILURE\n";
	return 0;
}