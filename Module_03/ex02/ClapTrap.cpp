/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:59:55 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 12:56:04 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-CONSTRUCTOR(ES)-*/

ClapTrap::ClapTrap() : _hp(10), _ep(10), _ad(0) {
	std::cout << BLUE << "ClapTrap: Default constructor called" << std::endl;
	this->_name = "NoName";
}

ClapTrap::ClapTrap( std::string name ) : _hp(10), _ep(10), _ad(0) {
	std::cout << BLUE << "ClapTrap: String constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap( const ClapTrap& obj ) {
	std::cout << BLUE << "ClapTrap: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR(ES)-*/

ClapTrap::~ClapTrap() {
	std::cout << BLUE << "ClapTrap: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

ClapTrap& ClapTrap::operator=( const ClapTrap& obj ) {
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void ClapTrap::setAttributes(int hp, int ep, int ad) {
	this->_hp = hp;
	this->_ep = ep;
	this->_ad = ad;
}

void ClapTrap::showAttributes() const {
	std::cout << WHITE;
	std::cout << "Name: " << _name;
	std::cout << ", HP: " << _hp;
	std::cout << ", EP: " << _ep;
	std::cout << ", AD: " << _ad << std::endl;
}

bool ClapTrap::isDead() const {
	if (this->_hp <= 0) {
		std::cout << YELLOW << this->_name << " is dead" << std::endl;
		return true;
	}
	return false;
}

bool ClapTrap::noEnergy() const {
	if (this->_ep <= 0) {
		std::cout << YELLOW << this->_name << " has no energy" << std::endl;
		return true;
	}
	return false;
}

void ClapTrap::attack(const std::string& target) {
	if(!isDead() && !noEnergy()) {
		std::cout << RED << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
		this->_ep--;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	if (!isDead()) {
		std::cout << PURPLE << "ClapTrap " << _name << " loses " << amount << " points of hp!" << std::endl;
		this->_hp -= amount;
		if (this->_hp < 0)
			this->_hp = 0;
	}
}
void ClapTrap::beRepaired(unsigned int amount) {
	if(!isDead() && !noEnergy()) {
		std::cout << GREEN << "ClapTrap " << this->_name << " gets repaired " << amount << " points of hp!" << std::endl;
		this->_ep--;
		this->_hp += amount;
	}
}