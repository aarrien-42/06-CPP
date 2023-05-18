/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:51:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:59:49 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Cat C;
	Cat C2(C);

	std::cout << std::endl << "Cat info:" << std::endl;
	C.showInfo();
	std::cout << std::endl << "Cat copy info:" << std::endl;
	C2.showInfo();

	delete j;//should not create a leak
	delete i;
	//system("leaks animal");
	return 0;
}