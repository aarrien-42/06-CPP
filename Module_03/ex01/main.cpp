/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:44:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 12:58:43 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void test_1() {
	std::cout << WHITE << std::endl << "TEST 1:" << std::endl;
	ScavTrap S("Susan");
	ScavTrap I(S);
	ClapTrap J("Jhon");
	S.showAttributes();
	J.showAttributes();
	S.attack("Jhon");
	J.takeDamage(20);
	S.showAttributes();
	J.showAttributes();
	J.takeDamage(20);
	S.beRepaired(40);
	S.showAttributes();
	J.showAttributes();
}

void test_2() {
	std::cout << WHITE << std::endl << "TEST 2:" << std::endl;
	ScavTrap A("Ana");
	for (int i = 0; i < 50; i++)
		A.attack("Air");
	A.showAttributes();
	A.attack("Air");
	A.guardGate();
	A.takeDamage(120);
	A.showAttributes();
	A.takeDamage(120);
	A.guardGate();
}

int main() {
	test_1();
	test_2();
	return 0;
}