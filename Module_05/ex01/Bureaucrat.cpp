/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:55:19 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/01 15:40:23 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*-CONSTRUCTOR(ES)-*/

Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150){
	std::cout << BLUE << "Bureaucrat: Default constructor called\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade <= 0)
		throw GradeTooHighException();
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
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(Form& form) {
	if (!form.getSigned()) {
		if (this->_grade > form.getSignGrade()) {
			std::cout << PURPLE << this->_name << " couldn’t sign " << form.getName() << " because requires a higher grade\n";
			throw GradeTooLowException();
		}
		std::cout << PURPLE << this->_name << " signed " << form.getName() << "\n";
		form.beSigned(*this);
	} else {
		std::cout << YELLOW << "This form is already signed\n";
	}
}
