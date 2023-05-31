/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:47:08 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 10:40:16 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*-CONSTRUCTOR(ES)-*/

Intern::Intern() {
	std::cout << BLUE << "Intern: Default constructor called\n";
}

Intern::Intern( const Intern& obj ) {
	(void)obj;
	std::cout << BLUE << "Intern: Copy constructor called\n";
}


/*-DESTRUCTOR-*/

Intern::~Intern() {
	std::cout << BLUE << "Intern: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR-*/

Intern& Intern::operator=( const Intern& obj ) {
	(void)obj;
	return *this;
};

/*-FUNCION(ES) MIEMBRO-*/

AForm* Intern::makeForm( std::string formName, std::string target ) {
	int i;
	AForm* selectedForm;
	std::string constructors[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (i = 0; i < 3; i++) {
		if (constructors[i] == formName)
			break;
	}
	switch (i) {
		case 0:
			selectedForm = new PresidentialPardonForm(target);
			break;
		case 1:
			selectedForm = new RobotomyRequestForm(target);
			break;
		case 2:
			selectedForm = new ShrubberyCreationForm(target);
			break;
		default:
			std::cout << RED << "Can't create that form\n";
			throw NonExistentForm();
	}
	std::cout << GREEN << "Intern creates " << formName << "\n";
	return selectedForm;
}
