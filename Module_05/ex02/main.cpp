/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 09:38:20 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		std::cout << BOLD << "\nTEST 1:\n";
		RobotomyRequestForm R("Igor");
		R.showRequirements();
		Bureaucrat B("Susana", 42);
		R.beSigned(B);
		B.executeForm(R);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 2:\n";
		Bureaucrat B("Jesus", 100);
		std::cout << B;
		PresidentialPardonForm P("me");
		P.showRequirements();
		P.beSigned(B);
		B.executeForm(P);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 3:\n";
		ShrubberyCreationForm S("home");
		PresidentialPardonForm P("me");
		RobotomyRequestForm R("me");
		S.showRequirements();
		P.showRequirements();
		R.showRequirements();
		Bureaucrat B1("Susana", 42);
		Bureaucrat B2("Sofia", 140);
		std::cout << B2;
		S.beSigned(B2);
		S.showRequirements();
		std::cout << B1;
		B1.executeForm(S);
		B2.executeForm(S);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 4:\n";
		Bureaucrat B("Not Signed", 1);
		RobotomyRequestForm R("me");
		R.showRequirements();
		B.executeForm(R);

	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	return 0;
}