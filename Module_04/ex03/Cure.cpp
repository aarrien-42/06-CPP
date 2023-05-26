/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:27:42 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/25 16:26:25 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*-CONSTRUCTOR(ES)-*/

Cure::Cure() : AMateria("cure"){
	std::cout << BLUE << "Cure: Default constructor called" << std::endl;
}

Cure::Cure( const Cure& obj ) {
	std::cout << BLUE << "Cure: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Cure::~Cure() {
	std::cout << BLUE << "Cure: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Cure& Cure::operator=( const Cure& obj ) {
	this->type = obj.getType();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use( ICharacter& target ) {
	std::cout << RED << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
