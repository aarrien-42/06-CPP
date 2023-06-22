/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:02 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/22 16:39:37 by aarrien-         ###   ########.fr       */
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
	PmergeMe S;

	if (!validSequence(ac, &av[1])) {
		std::cerr << "Error\n";
		return 1;
	}
	for (size_t i = 1; av[i]; i++) {
		S.vAddNum(std::atof(av[i]));
	}
	std::cout << "BEFORE: " << S << "\n";
	S.sortVector();
	std::cout << "AFTER: " << S << "\n";
	isSorted(S.getVector()) ? std::cout << "SUCCESS\n" : std::cout << "FAILURE\n";
	return 0;
}