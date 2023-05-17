/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 11:29:58 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 16:43:51 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*-CONSTRUCTOR(ES)-*/

DiamondTrap::DiamondTrap() {
	std::cout << BLUE << "DiamondTrap: Default constructor called" << std::endl;
	this->_name = "NoName";
	setAttributes(FragTrap::_hp, ScavTrap::_ep, FragTrap::_ad);
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	std::cout << BLUE << "DiamondTrap: String constructor called" << std::endl;
	this->_name = name;
	setAttributes(FragTrap::_hp, ScavTrap::_ep, FragTrap::_ad);
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj ) {
	std::cout << BLUE << "DiamondTrap: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR(ES)-*/

DiamondTrap::~DiamondTrap() {
	std::cout << BLUE << "DiamondTrap: Destructor called" << std::endl;
}

/*-FUNCION(ES) MIEMBRO-*/

void DiamondTrap::whoAmI() {
	std::cout << PURPLE << "DiamondTrap: Mi name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

