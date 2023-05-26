/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:27:44 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/25 16:26:21 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*-CONSTRUCTOR(ES)-*/

Ice::Ice() : AMateria("ice"){
	std::cout << BLUE << "Ice: Default constructor called" << std::endl;
}

Ice::Ice( const Ice& obj ) {
	std::cout << BLUE << "Ice: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Ice::~Ice() {
	std::cout << BLUE << "Ice: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Ice& Ice::operator=( const Ice& obj ) {
	this->type = obj.getType();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use( ICharacter& target ) {
	std::cout << RED << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
