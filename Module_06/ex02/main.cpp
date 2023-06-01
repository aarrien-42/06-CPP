/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:53:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/01 15:13:11 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Clases.hpp"

Base *generate(void) {
	srand((unsigned) time(NULL));
	int random = rand() % 3;
	switch (random) {
		case 0:
			std::cout << "created A\n";
			return new A();
		case 1:
			std::cout << "created B\n";
			return new B();
		case 2:
			std::cout << "created C\n";
			return new C();
	}
	return NULL;
}

void identify(Base *p) {
	A* APtr = dynamic_cast<A*>(p);
	if (APtr != nullptr) {
		std::cout << "A\n";
	}
	B* BPtr = dynamic_cast<B*>(p);
	if (BPtr != nullptr) {
		std::cout << "B\n";
	}
	C* CPtr = dynamic_cast<C*>(p);
	if (CPtr != nullptr) {
		std::cout << "C\n";
	}
}

int main() {
	Base* B;
	B = generate();
	std::cout << "identified: ";
	identify(B);
	delete B;
	return 0;
}