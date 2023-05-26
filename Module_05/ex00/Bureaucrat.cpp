/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:19 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 17:51:46 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*-CONSTRUCTOR(ES)-*/

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150){
	std::cout << "Bureaucrat: Default constructor called\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade > 150 || grade <= 0)
		std::cout << YELLOW << "Grade out of range\n";
	else {
		std::cout << "Bureaucrat: Parameter constructor called\n";
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ) {
	std::cout << "Bureaucrat: Copy constructor called\n";
	*this = obj;
}

/*-DESTRUCTOR-*/

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj ) {
	this->_grade = obj._grade;
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

const std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	if (this->_grade > 1)
		this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade < 150)
		this->_grade++;
}
