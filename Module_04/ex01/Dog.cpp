/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:12:10 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:56:55 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-CONSTRUCTOR(ES)-*/

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog( const Dog& obj ) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
	delete _brain;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

// deep copy => se crea un nuevo _brain y se copia toda la información
// shallow copy => se igualan direcciones de _brain, de forma que son el mismo
Dog& Dog::operator=( const Dog& obj ) {
	this->type = obj.type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setIdea(i, obj.getIdea(i));
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void Dog::makeSound() const {
	std::cout << "Guau" << std::endl;
}

void Dog::showInfo() const {
	_brain->showIdeas();
}

void Dog::setIdea( const int index, const std::string idea ) {
	_brain->setIdea(index, idea);
}

std::string Dog::getIdea( const int index ) const {
	return _brain->getIdea(index);
}
