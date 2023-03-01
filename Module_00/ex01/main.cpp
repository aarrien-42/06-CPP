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

bool isSame(std::string s1, std::string s2) {
	for (int i = 0; s1[i] && s2[i]; i++)
		if (s1[i] != s2[i])
			return false;
	return true;
}

void printMenu() {
	std::cout << "\nIngrese uno de los siguientes comandos:\n";
	std::cout << " ADD: Agrega un nuevo contacto\n";
	std::cout << " SEARCH: Muestra un contacto especifico\n";
	std::cout << " EXIT: El programa termina\n\n";
	std::cout << "> ";
}

int main() {
	PhoneBook book;
	std::string comando;
	std::string index;

	printMenu();
	while (getline(std::cin, comando)) {
		if (isSame(comando, "ADD"))
			book.addContact();
		else if (isSame(comando, "SEARCH"))
		{
			if (book.emptyBook()) {
				std::cout << "El libro está vacío\n";
				printMenu();
				continue;
			}
			book.printBook();
			std::cout << "Introduce el indice de la entrada a mostrar: ";
			getline(std::cin, index);
			if (isNumber(index)) {
				if (book.printContact(stoi(index)) == false)
					std::cout << "Contacto no encontrado\n";
			} else
				std::cout << "Eso no es un número\n";
		}
		else if (isSame(comando, "EXIT"))
			break;
		else
			std::cout << "\n¡No existe este comando!\n";
		printMenu();
	}
	return 0;
}