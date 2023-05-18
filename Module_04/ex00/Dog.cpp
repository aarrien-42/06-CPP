/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:12:10 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 18:54:08 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*-CONSTRUCTOR(ES)-*/

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog( const Dog& obj ) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Dog& Dog::operator=( const Dog& obj ) {
	this->type = obj.type;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void Dog::makeSound() const {
	std::cout << "Guau" << std::endl;
}