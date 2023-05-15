/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:12 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/09 09:38:22 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.hpp"

void PhoneBook::printBook() {
	std::cout << "\n     index| firstName|  lastName|  nickname\n\n";
	for (int i = 0; i < 8; i++)
		agenda[i].getInfo();
	std::cout << "\n";
}

void PhoneBook::addContact() {
	int i = 0;

	while (i < 7) {
		if (agenda[i].emptyContact())
			break;
		i++;
	}
	agenda[i].create(i);
}

bool PhoneBook::emptyBook() {
	if (agenda[0].emptyContact() == true)
		return true;
	return false;
}

bool PhoneBook::printContact(int index) {
	if (index >= 8 || agenda[index].emptyContact())
		return false;
	agenda[index].printInfo();
	return true;
}