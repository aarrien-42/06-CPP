/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:53:18 by aarrien-          #+#    #+#             */
/*   Updated: 2023/03/02 18:53:19 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Agenda.hpp"

void Contact::create(int i) {
	do {
		std::cout << "First name? ";
		getline(std::cin, firstName);
	} while (isEmpty(firstName));
	do {
		std::cout << "Last name? ";
		getline(std::cin, lastName);
	} while (isEmpty(lastName));
	do {
		std::cout << "Nickname? ";
		getline(std::cin, nickname);
	} while (isEmpty(nickname));
	while(true) {
		std::cout << "Phone number? ";
		getline(std::cin, phoneNumber);
		if (isEmpty(phoneNumber) || !isNumber(phoneNumber))
			std::cout << "Must be a number! ";
		else
			break;
	}
	do {
		std::cout << "Darkest secret? ";
		getline(std::cin, darkestSecret);
	} while (isEmpty(darkestSecret));
	index = i;
	std::cout << "\nNuevo contacto creado exitosamente\n";
}

std::string resizeString(std::string s, int len) {
		s.resize(len);
	return s;
}

void Contact::getInfo() {
	if (!isEmpty(firstName)) {
		std::cout << std::setw(10) << index << "|";
		std::cout << std::setw(10) << (firstName.length() < 10 ? firstName : resizeString(firstName, 9)+'.') << "|";
		std::cout << std::setw(10) << (lastName.length() < 10 ? lastName : resizeString(lastName, 9)+'.') << "|";
		std::cout << std::setw(10) << (nickname.length() < 10 ? nickname : resizeString(nickname, 9)+'.') << "\n";
	}
}

void Contact::printInfo() {
	std::cout << "\nInformación de contacto:\n";
	std::cout << " firstName: " + firstName << std::endl;
	std::cout << " lastName: " + lastName << std::endl;
	std::cout << " nickname: " + nickname << std::endl;
	std::cout << " phoneNumber: " + phoneNumber << std::endl;
	std::cout << " darkestSecret: " + darkestSecret << std::endl;
	std::cout << "\n";
}

bool Contact::emptyContact() {
	if (isEmpty(firstName))
		return true;
	return false;
}
