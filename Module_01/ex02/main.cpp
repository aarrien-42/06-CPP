/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:56 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/14 15:44:19 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string s = "HI THIS IS BRAIN";
	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "\nDIRECCIONES\n\n";
	std::cout << "Dirección variable tipo string:                 " << &s << std::endl;
	std::cout << "Dirección de memoria contenida en stringPTR:    " << stringPTR << std::endl;
	std::cout << "Dirección de memoria contenida en stringREF:    " << &stringREF << std::endl;

	std::cout << "\nVALORES\n\n";
	std::cout << "Valor de variable string:                       " << s << std::endl;
	std::cout << "Valor apuntado por stringPTR:                   " << *stringPTR << std::endl;
	std::cout << "Valor apuntado por stringREF:                   " << stringREF << std::endl;
	return 0;
}