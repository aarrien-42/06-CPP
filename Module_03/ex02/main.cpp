/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:44:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/16 12:53:52 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap F("Fer");
	F.showAttributes();
	F.attack("Air");
	F.showAttributes();
	F.highFivesGuys();
	FragTrap F2("Fer2");
	F2 = F;
	F.takeDamage(20);
	F.showAttributes();
	F2.showAttributes();
	return 0;
}