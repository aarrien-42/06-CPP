/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:44:02 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/17 18:59:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main( int ac, char **av ) {
	if (ac == 2) {
		BitcoinExchange BTC;
		BTC.processInput(av[1]);
	} else {
		std::cerr << "Error: could not open file.\n";
	}
	return 0;
}