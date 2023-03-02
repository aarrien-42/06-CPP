/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:54:10 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/02 18:54:11 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string t ) {
	setType(t);
}

std::string const &Weapon::getType(){
	return type;
}

void Weapon::setType( std::string newType ) {
	this->type = newType;
}