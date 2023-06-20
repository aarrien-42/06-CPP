/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:02 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/20 15:57:36 by aarrien-         ###   ########.fr       */
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

//                count|min|max
// ./PmergeMe `jot -r 10 0 5 | tr '\n' ' '`
int main( int ac, char **av ) {
	if (!validSequence(ac, &av[1])) {
		std::cerr << "Error\n";
		return 1;
	}
	PmergeMe S;
	for (size_t i = 1; av[i]; i += 2) {
		S.addPair(Pair(std::atof(av[i]), av[i + 1] ? std::atof(av[i + 1]) : -1));
		if (!av[i + 1])
			break;
	}
	std::cout << S;
	S.sortVector();
	std::cout << S;
	return 0;
}