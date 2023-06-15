/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:47:32 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/15 14:53:18 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try {
		std:: cout << "\nTEST 1:\n";
		Array<int> A(5);
		std::cout << A;
		A[2] = 42;
		std::cout << A;
		Array<int> B(A);
		B[0] = 100;
		std::cout << A;
		std::cout << B;
		A[1] = 142;
		A[0] = B[0];
		std::cout << A;
		std::cout << "Position 0 in the array A = " << A[0] << "\n";
	} catch(std::exception& e) {
		std::cerr << "Error catch: " << e.what() << "\n";
	}
	try {
		std:: cout << "\nTEST 2:\n";
		Array<float> A(20);
		std::cout << A;
		std::cout << A[42] << "\n";
	} catch(std::exception& e) {
		std::cerr << "Error catch: " << e.what() << "\n";
	}
	try {
		std:: cout << "\nTEST 3:\n";
		Array<char> A(10);
		std::cout << "Array size = " << A.size() << "\n";
		std::string str = "Hola mundo";
		for (int i = 0; i < 10; i++)
			A[i] = str[i];
		std::cout << A;
	} catch(std::exception& e) {
		std::cerr << "Error catch: " << e.what() << "\n";
	}
	return 0;
}