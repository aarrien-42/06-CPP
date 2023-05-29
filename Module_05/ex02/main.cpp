/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/29 15:30:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	try {
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