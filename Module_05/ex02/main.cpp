/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/29 16:07:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
		std::cout << BOLD << "\nTEST 1:\n";
		RobotomyRequestForm R("me");
		R.showRequirements();
		Bureaucrat B("Susana", 42);
		R.beSigned(B);
		R.execute(B);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 2:\n";
		Bureaucrat B("Jesus", 100);
		std::cout << B;
		PresidentialPardonForm P("tree");
		P.showRequirements();
		P.beSigned(B);
		P.execute(B);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 3:\n";
		ShrubberyCreationForm S("me");
		PresidentialPardonForm P("me");
		RobotomyRequestForm R("me");
		S.showRequirements();
		P.showRequirements();
		R.showRequirements();
		Bureaucrat B1("Susana", 42);
		Bureaucrat B2("Sofia", 1);
		std::cout << B2;
		S.beSigned(B2);
		S.showRequirements();
		std::cout << B1;
		S.execute(B1);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	return 0;
}