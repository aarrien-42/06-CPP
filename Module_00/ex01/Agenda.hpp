#include <iostream>
#include <iomanip>
#include <cstring>

class Contact {
	private:
		std::string firstName, lastName, \
			nickname, phoneNumber, darkestSecret;
		int index;
	public:
		void create(int i);
		void getInfo();
		void printInfo();
		bool emptyContact();
};

class PhoneBook {
	private:
		Contact agenda[8];
	public:
		void printBook();
		void addContact();
		bool emptyBook();
		bool printContact(int index);
};

bool isNumber(std::string s);
bool isEmpty(std::string s);