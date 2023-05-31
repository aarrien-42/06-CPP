/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 12:58:23 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
	try {
		std::cout << BOLD << "\nTEST 1\n";
		Form F("Test", 151, 42);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 2\n";
		Form F("Test", 42, -42);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 3\n";
		Form F("Test", 42, 42);
		std::cout << F;
		Bureaucrat B1("Pepe", 100);
		Bureaucrat B2("David", 24);
		F.beSigned(B2);
		F.beSigned(B1);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 4\n";
		Form F("Test", 84, 42);
		std::cout << F;
		Bureaucrat B1("Pepe", 100);
		F.beSigned(B1);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 5\n";
		Form F("Test", 84, 42);
		std::cout << F;
		Bureaucrat B1("Pepe", 100);
		B1.signForm(F);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	return 0;
}