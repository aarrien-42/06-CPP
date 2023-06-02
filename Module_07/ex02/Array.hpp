/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:05:09 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/02 19:20:45 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

//	• Construcción sin parámetros: crea un array vacío.
//	• Construcción con un unsigned int n como parámetro: crea un array de n elementos, iniciado por defecto. Pista: intenta compilar con int *a = new int();, luego
//	muestra *a.
//	• Construcción por copia y por operador de asignación: en ambos casos, modificar
//	uno de los dos arrays después de copiar/asignar no afectará al otro.
//	• TIENES que utilizar el operador new[] para la reserva de memoria. No debes
//	reservar más o menos memoria de la necesaria. Tu código nunca debe acceder a
//	memoria no reservada.
//	• Los elementos son accesibles utilizando el operator[].
//	• Cuando accedas a un elemento utilizando operator[], en caso de que esté fuera de
//	límites una excepción std::exception debe lanzarse.
//	• Debe existir una member function size que devuelva el número de elementos en el
//	array. Esta función no debe aceptar parámetros ni debe modificar la instancia de
//	ninguna forma

template <typename T>
class Array {
	public:
		Array();
		Array( unsigned int n );
		Array( const Array& obj );
};

#endif