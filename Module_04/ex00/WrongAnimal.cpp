/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:58:03 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 18:59:24 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*-CONSTRUCTOR(ES)-*/

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj ) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& obj ) {
	this->type = obj.type;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

const std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "[Sound not specified]" << std::endl;
}
