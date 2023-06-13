/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:42:21 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 18:29:12 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*-CONSTRUCTORES-*/

Span::Span() {}

Span::Span( unsigned int N ) {

}

Span::Span( const Span& obj ) {
	*this = obj;
}

/*-DESTRUCTOR-*/

Span::~Span() {}

/*-SOBRECARGA DE OPERADOR-*/

Span& Span::operator=( const Span& obj ) {
	std::copy(obj);
}

/*-MÉTODOS-*/

void Span::addNumber() {

}

int Span::shortestSpan() {

}

int Span::longestSpan() {

}
