/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 11:07:48 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data {
	int i;
};

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	{
		Data D;
		Data *res;
		D.i = -21;

		res = deserialize(serialize(&D));
		std::cout << "\nTEST 1:\n";
		std::cout << "  before: " << D.i << "\n";
		std::cout << "  after:  " << res->i << "\n";
	}
	{
		uintptr_t i = 42;
		uintptr_t o;

		o = serialize(deserialize(i));
		std::cout << "\nTEST 2:\n";
		std::cout << "  before: " << i << "\n";
		std::cout << "  after:  " << o << "\n";
	}
	std::cout << "\n";
	return 0;
}