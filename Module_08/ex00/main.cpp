/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:40:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 17:40:04 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	try {
		int arr[] = {1, 2, 3, 4, 5};
		std::vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

		std::cout << "\n" << *easyfind(numbers, 2) << "\n\n";
	} catch ( const std::exception& e ) {
		std::cout << "\nError: " << e.what() << "\n\n";
	}
	return 0;
}