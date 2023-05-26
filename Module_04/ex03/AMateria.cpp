/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:52 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/25 12:19:31 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*-CONSTRUCTOR(ES)-*/

AMateria::AMateria() {
	std::cout << BLUE << "AMateria: Default constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type ) {
	std::cout << BLUE << "AMateria: String constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria( const AMateria& obj ) {
	std::cout << BLUE << "AMateria: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

AMateria::~AMateria() {
	std::cout << BLUE << "AMateria: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

AMateria& AMateria::operator=( const AMateria& obj ) {
	this->type = obj.getType();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

std::string const & AMateria::getType() const {
	return type;
}

void AMateria::use( ICharacter& target ) {
	std::cout << RED << "* " << type << " spell has been used in " << target.getName() << "*" << std::endl;
}