/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:10:42 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 14:23:07 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*-CONSTRUCTOR(ES)-*/

FragTrap::FragTrap() : ClapTrap() {
	std::cout << BLUE << "FragTrap: Default constructor called" << std::endl;
	setAttributes(100, 100, 30);
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << BLUE << "FragTrap: String constructor called" << std::endl;
	setAttributes(100, 100, 30);
}

FragTrap::FragTrap( const FragTrap& obj ) : ClapTrap() {
	std::cout << BLUE << "FragTrap: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR(ES)-*/

FragTrap::~FragTrap() {
	std::cout << BLUE << "FragTrap: Destructor called" << std::endl;
}

/*-FUNCION(ES) MIEMBRO-*/

void FragTrap::attack(const std::string& target) {
	if(!isDead() && !noEnergy()) {
		std::cout << RED << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void FragTrap::highFivesGuys(void) {
	if (!isDead())
		std::cout << CYAN << "FragTrap " << this->_name << " request a high five!" << std::endl;
}