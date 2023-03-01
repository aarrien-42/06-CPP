#include "agenda.hpp"

bool isNumber(std::string s) {
	for (int i = 0; i < s.length(); i++)
		if (std::isdigit(s[i]) == 0 && s[i] != ' ')
			return false;
	return true;
}

bool isEmpty(std::string s) {
	if (s.empty())
		return true;
	for (int i = 0; i < s.length(); i++)
		if (std::isspace(s[i]) == 0)
			return false;
	return true;
}

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

bool Contact::emptyContact() {
	if (isEmpty(firstName))
		return true;
	return false;
}
