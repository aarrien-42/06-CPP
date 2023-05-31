/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 09:22:51 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		std::cout << BOLD << "\nTEST 1:\n";
		Bureaucrat B("Pedro", 0);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 2:\n";
		Bureaucrat B("Pedro", 151);
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 3:\n";
		Bureaucrat B("Luis", 42);
		for (int i = 0; i < 50; i++) {
			if (i % 10 == 0)
				std::cout << B;
			B.incrementGrade();
		}
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	try {
		std::cout << BOLD << "\nTEST 4:\n";
		Bureaucrat B("Luis", 135);
		for (int i = 0; i < 50; i++) {
			if (i % 10 == 0)
				std::cout << B;
			B.decrementGrade();
		}
	}
	catch (const std::exception& e) {
		std::cout << YELLOW << "Caught exception: " << e.what() << "\n";
	}
	return 0;
}