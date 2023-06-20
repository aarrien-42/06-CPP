/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:40:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/20 17:01:07 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	try {
		std::cout << "VECTOR:\n";
		std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << *easyfind(numbers, 2) << "\n";
		std::cout << *easyfind(numbers, 10) << "\n";
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << "\n";
	}
	try {
		std::cout << "LIST:\n";
		std::list<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << *easyfind(numbers, 2) << "\n";
		std::cout << *easyfind(numbers, -10) << "\n";
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << "\n";
	}
	try {
		std::cout << "DEQUE:\n";
		std::deque<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << *easyfind(numbers, 2) << "\n";
		std::cout << *easyfind(numbers, 10) << "\n";
	} catch ( const std::exception& e ) {
		std::cout << "Error: " << e.what() << "\n";
	}
	return 0;
}