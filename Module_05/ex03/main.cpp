/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 10:39:07 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
	try {
		std::cout << BOLD << "\nTEST 1:\n";
		Intern I;
		AForm* form;
		form = I.makeForm("shrubbery creation", "Willy");
		form->showRequirements();
		delete form;
		form = I.makeForm("presidential pardon", "Billy");
		form->showRequirements();
		delete form;
		form = I.makeForm("robotomy request", "Bender");
		form->showRequirements();
		delete form;
		form = I.makeForm("other stuff", "Other");
		form->showRequirements();
		delete form;

	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	return 0;
}