/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:44:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/17 16:46:16 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap P("Pedro");
	DiamondTrap A;
	A.whoAmI();
	ScavTrap S("Susan");
	FragTrap F("Fer");
	P.attack("Fer");
	F.takeDamage(30);
	P.showAttributes();
	P.whoAmI();
	P.takeDamage(20);
	P.highFivesGuys();
	P.guardGate();
	P.showAttributes();
	S.showAttributes();
	F.showAttributes();
	F.attack("Susan");
	S.takeDamage(30);
	S.showAttributes();
	F.showAttributes();
	return 0;
}