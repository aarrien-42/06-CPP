/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:02 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/17 21:07:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char **av ) {
	if (ac == 2) {
		RPN rpn;
		for (size_t i = 0; av[1][i]; i++) {
			if (av[1][i] >= '0' && av[1][i] <= '9')
				rpn.addNumber(av[1][i] - '0');
			else if (av[1][i] == '+' || av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
				rpn.makeOperation(av[1][i]);
			else if (av[1][i] != ' ') {
				std::cerr << "Error\n";
				return 1;
			}
		}
		std::cout << rpn;
	} else {
		std::cerr << "Invalid input\n";
		return 1;
	}
	return 0;
}