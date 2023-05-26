/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:51:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 15:42:15 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	//Animal A;
	Cat C;
	Animal* j = new Dog();

	C.makeSound();
	j->makeSound();
	//A.makeSound();
	delete j;
	return 0;
}