/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:10:20 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:58:33 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-CONSTRUCTOR(ES)-*/

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat( const Cat& obj ) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
	delete _brain;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

// deep copy => se crea un nuevo _brain y se copia toda la información
// shallow copy => se igualan direcciones de _brain, de forma que son el mismo
Cat& Cat::operator=( const Cat& obj ) {
	this->type = obj.type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->setIdea(i, obj.getIdea(i));
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}

void Cat::showInfo() const {
	_brain->showIdeas();
}

void Cat::setIdea( const int index, const std::string idea ) {
	_brain->setIdea(index, idea);
}

std::string Cat::getIdea( const int index ) const {
	return _brain->getIdea(index);
}
