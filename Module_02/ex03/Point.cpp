/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:47:47 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 14:50:52 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*-CONSTRUCTOR(ES)-*/

Point::Point() : x(Fixed()), y(Fixed()){}

Point::Point( const Point& P ) : x(P.getX()), y(P.getY()) {}

Point::Point( const Fixed& X, const Fixed& Y ) : x(X), y(Y) {}

/*-DESTRUCTOR(ES)-*/

Point::~Point() {}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Point Point::operator=( const Point& P ) {
	return Point(P);
}

/*-FUNCION(ES) MIEMBRO-*/

const Fixed& Point::getX( void ) const {
	return x;
}

const Fixed& Point::getY( void ) const {
	return y;
}
