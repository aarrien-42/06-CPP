/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:58:03 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 18:52:28 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*-CONSTRUCTOR(ES)-*/

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( const Animal& obj ) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Animal::~Animal() {
	std::cout << "Animal: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Animal& Animal::operator=( const Animal& obj ) {
	this->type = obj.type;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

const std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "[Sound not specified]" << std::endl;
}
