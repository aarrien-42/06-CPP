/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:54:08 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 10:31:32 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	replaceString(av[1], av[2], av[3]);
	return 0;
}