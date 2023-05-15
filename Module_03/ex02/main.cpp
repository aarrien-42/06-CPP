/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 08:44:41 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/11 14:20:33 by aarrien-         ###   ########.fr       */
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
	return 0;
}