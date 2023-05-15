/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:25:35 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 11:06:55 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-CONSTRUCTOR(ES)-*/

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed( const int raw ) {
	std::cout << "Int constructor called" << std::endl;
	_value = roundf(raw << _frac);
}

Fixed::Fixed( const float raw ) {
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(raw * (2 << (_frac - 1)));
}

/*-DESTRUCTOR(ES)-*/

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Fixed& Fixed::operator=( const Fixed& obj ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream& o, const Fixed& f ){
	f.printFixed(o);
	return o;
}

/*-FUNCION(ES) MIEMBRO-*/

int Fixed::getRawBits( void ) const {
	return this->_value;
}

void Fixed::setRawBits ( int const raw ) {
	this->_value = raw;
}

float Fixed::toFloat( void ) const {
	return (float)_value / (2 << (_frac - 1));
}

int Fixed::toInt( void ) const {
	return _value / (2 << (_frac - 1));
}

std::ostream& Fixed::printFixed( std::ostream& o ) const {
	o << this->toFloat();
	return o;
}
