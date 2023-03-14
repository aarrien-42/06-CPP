/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:54:03 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/14 15:54:11 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) {
	name = n;
}

void HumanB::setWeapon( Weapon &w ) {
	weapon = &w;
}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}