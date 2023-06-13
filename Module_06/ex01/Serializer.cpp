/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:24:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 14:02:50 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*-CONSTRUCTORES-*/

Serializer::Serializer() {}

Serializer::Serializer( const Serializer& obj ) { *this = obj; }

/*-DESTRUCTOR-*/

Serializer::~Serializer() {}

/*-SOBRECARGA DE OPERADOR-*/

Serializer& Serializer::operator=( const Serializer& obj ) {
	(void)obj;
	return *this;
}

/*-FUNCION MIEMBRO-*/

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
