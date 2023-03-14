/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:54:06 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/14 15:55:17 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

// si weapon fuese una referencia nos exigiría inicializarlo desde el constructor
class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string n);
		void setWeapon( Weapon &w );
		void attack();
};

#endif