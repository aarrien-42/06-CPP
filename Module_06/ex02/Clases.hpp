/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Clases.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:57:50 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/01 15:06:04 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASES_HPP
#define CLASES_HPP

#include <iostream>

class Base {
	public:
		virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif