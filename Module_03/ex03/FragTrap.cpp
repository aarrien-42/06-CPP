/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:10:42 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 16:41:16 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*-CONSTRUCTOR(ES)-*/

FragTrap::FragTrap() : ClapTrap(), _hp(100), _ep(100), _ad(30) {
	std::cout << BLUE << "FragTrap: Default constructor called" << std::endl;
	setAttributes(100, 100, 30);
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name), _hp(100), _ep(100), _ad(30) {
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

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

FragTrap& FragTrap::operator=( const FragTrap& obj ) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void FragTrap::attack(const std::string& target) {
	if(!isDead() && !noEnergy()) {
		std::cout << RED << "FragTrap " << this->_name << " attacks " << target << ", causing " << ClapTrap::_ad << " points of damage!" << std::endl;
		ClapTrap::_ep--;
	}
}

void FragTrap::highFivesGuys(void) {
	if (!isDead())
		std::cout << CYAN << "FragTrap " << this->_name << " request a high five!" << std::endl;
}