/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:59 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 10:25:49 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w): weapon(w){
	name = n;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}