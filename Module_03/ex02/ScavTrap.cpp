/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:15:51 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 12:55:11 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*-CONSTRUCTOR(ES)-*/

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << BLUE << "ScavTrap: Default constructor called" << std::endl;
	setAttributes(100, 50, 20);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << BLUE << "ScavTrap: String constructor called" << std::endl;
	setAttributes(100, 50, 20);
}

ScavTrap::ScavTrap( const ScavTrap& obj ) : ClapTrap() {
	std::cout << BLUE << "ScavTrap: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR(ES)-*/

ScavTrap::~ScavTrap() {
	std::cout << BLUE << "ScavTrap: Destructor called" << std::endl;
}

/*-FUNCION(ES) MIEMBRO-*/

void ScavTrap::attack(const std::string& target) {
	if(!isDead() && !noEnergy()) {
		std::cout << RED << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
}

void ScavTrap::guardGate() const {
	if(!isDead())
		std::cout << CYAN << "ScavTrap " << this->_name << " is now in Gate Keeper mode" << std::endl;
}
