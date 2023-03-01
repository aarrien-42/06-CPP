#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string firstName, lastName, \
			nickname, phoneNumber, darkestSecret;
		int index;
	public:
		void create(int i);
		void getInfo();
		bool emptyContact();
};

class PhoneBook {
	private:
		Contact agenda[8];
	public:
		PhoneBook();
		void printBook();
		void addContact();
};

bool isNumber(std::string s);
bool isEmpty(std::string s);