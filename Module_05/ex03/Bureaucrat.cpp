/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:19 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 09:34:44 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/*-CONSTRUCTOR(ES)-*/

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150){
	std::cout << BLUE << "Bureaucrat: Default constructor called\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade <= 0)
		throw GradeTooLowException();
	std::cout << BLUE << "Bureaucrat: Parameter constructor called\n";
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ) {
	std::cout << BLUE << "Bureaucrat: Copy constructor called\n";
	*this = obj;
}

/*-DESTRUCTOR-*/

Bureaucrat::~Bureaucrat() {
	std::cout << BLUE << "Bureaucrat: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& obj ) {
	this->_grade = obj._grade;
	return *this;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& b ) {
	o << PURPLE << b.getName() <<", bureaucrat grade " << b.getGrade() << "\n";
	return o;
}

/*-FUNCION(ES) MIEMBRO-*/

const std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	if (this->_grade <= 1)
		throw GradeTooLowException();
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade >= 150)
		throw GradeTooHighException();
	this->_grade++;
}

void Bureaucrat::executeForm(AForm const & form) {
	form.execute(*this);
	std::cout << GREEN << this->_name << " executed " << form.getName() << "\n";
}
