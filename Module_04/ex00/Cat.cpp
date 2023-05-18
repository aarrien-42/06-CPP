/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:10:20 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 18:54:24 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*-CONSTRUCTOR(ES)-*/

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat( const Cat& obj ) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Cat::~Cat() {
	std::cout << "Cat: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Cat& Cat::operator=( const Cat& obj ) {
	this->type = obj.type;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}
