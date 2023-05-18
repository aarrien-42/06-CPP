/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:16:29 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/18 09:49:45 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*-CONSTRUCTOR(ES)-*/

Brain::Brain() {
	std::cout << "Brain: Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "I want to eat " + std::to_string(i) + " bowls of food";
}

Brain::Brain( const Brain& obj ) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

Brain::~Brain() {
	std::cout << "Brain: Destructor called" << std::endl;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Brain& Brain::operator=( const Brain& obj ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.getIdea(i);
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void Brain::showIdeas() const {
	for (int i = 0; i < 100; i++) {
		if (i == 95)
			std::cout << std::endl;
		if (i > 5 && i < 95)
			std::cout << ".";
		else {
			std::cout << "Idea " << std::to_string(i) << ": " << ideas[i];
			std::cout << " => dir [" << &ideas[i] << "]" << std::endl;
		}
	}
}

void Brain::setIdea( const int index, const std::string idea ) {
	ideas[index] = idea;
}

std::string Brain::getIdea( const int index ) const {
	return ideas[index];
}
