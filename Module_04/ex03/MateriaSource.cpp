/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:20:57 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 13:48:46 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*-CONSTRUCTOR(ES)-*/

MateriaSource::MateriaSource() {
	std::cout << BLUE << "MateriaSource: Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource& obj ) {
	std::cout << BLUE << "MateriaSource: Copy constructor called" << std::endl;
	*this = obj;
}

/*-DESTRUCTOR-*/

MateriaSource::~MateriaSource() {
	std::cout << BLUE << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_memory[i];
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

MateriaSource& MateriaSource::operator=( const MateriaSource& obj ) {
	for (int i = 0; i < 4; i++)
		this->_memory[i] = obj._memory[i];
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;
	while (i < 4) {
		if (this->_memory[i] == NULL) {
			this->_memory[i] = m;
			break;
		}
		i++;
	}
	if (i >= 4)
		std::cout << YELLOW << "No space left for learning " << m->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	while (i < 4) {
		if (this->_memory[i] != NULL && type.compare(this->_memory[i]->getType()) == 0) {
			std::cout << PURPLE  << _memory[i]->getType() << " materia created" << std::endl;
			return this->_memory[i]->clone();
		}
		i++;
	}
	if (i >= 4)
		std::cout << YELLOW  << type << " it's not learned yet" << std::endl;
	return NULL;
}
