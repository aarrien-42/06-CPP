/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:32:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 12:17:03 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain( std::string level ) {
	int	i = getIndex(level);
	if (i < 4) {
		typedef void (Harl::*fptr)( void );
		fptr funciones[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		(this->*funciones[i])();
	}
}

int Harl::getIndex( std::string level ) {
	int	i = 0;
	std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4) {
		if (level.compare(command[i]) == 0)
			break;
		i++;
	}
	return i;
}

void Harl::selectOut( int index ) {
	switch (index) {
		case 0:
			complain("DEBUG");
			selectOut(1);
			break;
		case 1:
			complain("INFO");
			selectOut(2);
			break;
		case 2:
			complain("WARNING");
			selectOut(3);
			break;
		case 3:
			complain("ERROR");
			break;
	}
}
