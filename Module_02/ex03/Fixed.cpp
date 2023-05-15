/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:25:35 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 14:50:33 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*-CONSTRUCTOR(ES)-*/

Fixed::Fixed() : _value(0) {}

Fixed::Fixed( const Fixed& obj ) {
	*this = obj;
}

Fixed::Fixed( const int raw ) {
	_value = roundf(raw << _frac);
}

Fixed::Fixed( const float raw ) {
	_value = roundf(raw * (2 << (_frac - 1)));
}

/*-DESTRUCTOR(ES)-*/

Fixed::~Fixed() {}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Fixed& Fixed::operator=( const Fixed& obj ) {
	this->_value = obj.getRawBits();
	return *this;
}

Fixed Fixed::operator+( const Fixed& obj ) const {
	Fixed res;
	res.setRawBits(this->_value + obj.getRawBits());
	return res;
}

Fixed Fixed::operator-( const Fixed& obj ) const {
	Fixed res;
	res.setRawBits(this->_value - obj.getRawBits());
	return res;
}

Fixed Fixed::operator*( const Fixed& obj ) const {
	Fixed res(this->toFloat() * obj.toFloat());
	return res;
}

Fixed Fixed::operator/( const Fixed& obj ) const {
	Fixed res(this->toFloat() / obj.toFloat());
	return res;
}

Fixed& Fixed::operator++( void ) {
	this->_value++;
	return *this;
}

Fixed& Fixed::operator--( void ) {
	this->_value--;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed res(*this);
	this->_value++;
	return res;
}

Fixed Fixed::operator--( int ) {
	Fixed res(*this);
	this->_value--;
	return res;
}

bool Fixed::operator==( const Fixed& obj ) const {
	return this->_value == obj.getRawBits();
}

bool Fixed::operator!=( const Fixed& obj ) const {
	return !(*this == obj);
}

bool Fixed::operator<( const Fixed& obj ) const {
	return this->_value < obj.getRawBits();
}

bool Fixed::operator>( const Fixed& obj ) const {
	return this->_value > obj.getRawBits();
}

bool Fixed::operator<=( const Fixed& obj ) const {
	return !(this->_value > obj.getRawBits());
}

bool Fixed::operator>=( const Fixed& obj ) const {
	return !(this->_value < obj.getRawBits());
}

std::ostream& operator<<( std::ostream& o, const Fixed& f ) {
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

const Fixed& Fixed::max( const Fixed& l, const Fixed& r ) {
	if (l > r)
		return l;
	return r;
}

const Fixed& Fixed::min( const Fixed& l, const Fixed& r ) {
	if (l < r)
		return l;
	return r;
}

Fixed& Fixed::max( Fixed& l, Fixed& r ) {
	if (l > r)
		return l;
	return r;
}

Fixed& Fixed::min( Fixed& l, Fixed& r ) {
	if (l < r)
		return l;
	return r;
}
