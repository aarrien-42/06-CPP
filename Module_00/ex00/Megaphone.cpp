/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:52:32 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 09:59:54 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string toMayus(std::string s){
	for (int i = 0; i < (int)s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

int main(int ac, char **av){
	for (int i = 1; av[i]; i++)
		std::cout << toMayus(av[i]);
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}