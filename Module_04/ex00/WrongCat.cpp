/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:10:20 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 18:59:45 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*-CONSTRUCTOR(ES)-*/

WrongCat::WrongCat() {
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& obj ) {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

WrongCat::~WrongCat() {
	std::cout << "WrongCat: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

WrongCat& WrongCat::operator=( const WrongCat& obj ) {
	this->type = obj.type;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void WrongCat::makeSound() const {
	std::cout << "Miau" << std::endl;
}
