#include "agenda.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Empty Phone Book created!" << std::endl;
}

void PhoneBook::printBook() {
	for (int i = 0; i < 8; i++)
		agenda[i].getInfo();
}

void PhoneBook::addContact() {
	int i = 0;

	while (i < 8) {
		if (agenda[i].emptyContact())
			break;
		i++;
	}
	agenda[i].create(i);
}