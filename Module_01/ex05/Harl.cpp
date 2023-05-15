/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:32:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 11:53:18 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
	int	i = 0;
	std::string command[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4) {
		if (level.compare(command[i]) == 0)
			break;
		i++;
	}
	if (i < 4) {
		typedef void (Harl::*fptr)( void );
		fptr funciones[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		(this->*funciones[i])();
	}
}