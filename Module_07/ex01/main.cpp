/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:47:32 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/02 19:14:15 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void incrementTen(T& i) {
	i+=10;
}

int main() {
	int array1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char array2[] = "0123456789";
	int len = 10;

	std::cout << "\nTEST 1:\n";
	::iter(array1, len, incrementTen);
	for (int i = 0; i < len; i++)
		std::cout << i << ": " << array1[i] << "\n";

	std::cout << "\nTEST 2:\n";
	::iter(array2, len, incrementTen);
	for (int i = 0; i < len; i++)
		std::cout << i << ": " << array2[i] << "\n";
	return 0;
}