/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:54 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 13:09:48 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*-CONSTRUCTOR(ES)-*/

Character::Character() : _name("NoName") {
	std::cout << BLUE << "Character: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( const std::string name ) : _name(name) {
	std::cout << BLUE << "Character: String constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character& obj ) : _name(obj._name) {
	std::cout << BLUE << "Character: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Character::~Character() {
	std::cout << BLUE << "Character: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Character& Character::operator=( const Character& obj ) {
	this->_name = obj._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = obj._inventory[i];
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	int i;
	if (!m) {
		std::cout << YELLOW << "This is not an existing materia" << std::endl;
		return;
	}
	for (i = 0; i < 4; ++i) {
		if (m != NULL && this->_inventory[i] == m) {
			std::cout << YELLOW << "Materia already equiped" << std::endl;
			return;
		}
	}
	for (i = 0; i < 4; ++i) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			break;
		}
	}
	if (i == 4)
		std::cout << PURPLE << "* no space left for the " << m->getType() << " potion in the inventory *" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		std::cout << YELLOW << "Index out of range" << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << YELLOW << "There's not a potion in that slot" << std::endl;
	else {
		std::cout << PURPLE << "* "<< this->_inventory[idx]->getType() << " potion in slot " << idx << " unequiped *" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4)
		std::cout << YELLOW << "Index out of range" << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << YELLOW << "There's not a potion in that slot" << std::endl;
	else
		this->_inventory[idx]->use(target);
}
