/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:44:24 by codespace         #+#    #+#             */
/*   Updated: 2023/05/28 18:56:08 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*-CONSTRUCTOR(ES)-*/

Form::Form() : _name("NoName"), _signed(false), _signGrade(150), _execGrade(150) {
	std::cout << BLUE << "Form: Default constructor called\n";
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << BLUE << "Form: Parameter constructor called\n";
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

Form::Form( const Form& obj )  : _name(obj.getName()), _signed(obj.getSigned()), _signGrade(obj.getSignGrade()), _execGrade(obj.getExecGrade()) {
	std::cout << BLUE << "Form: Copy constructor called\n";
}

/*-DESTRUCTOR-*/

Form::~Form() {
	std::cout << BLUE << "Form: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

Form Form::operator=( const Form& obj ) {
	Form f(obj);
	return f;
}

std::ostream& operator<<( std::ostream& o, const Form& b ) {
	o << CYAN;
	o <<"Form info:\n";
	o << "  Name: " << b.getName() << "\n";
	o << "  Signed: ";
	if (b.getSigned())
		o << "true\n";
	else
		o << "false\n";
	o << "  Sign grade: " << b.getSignGrade() << "\n";
	o << "  Exec grade: " << b.getExecGrade() << "\n";
	return o;
}

/*-FUNCION(ES) MIEMBRO-*/

const std::string Form::getName() const {return this->_name;};

bool Form::getSigned() const {return this->_signed;};

int Form::getSignGrade() const {return this->_signGrade;};

int Form::getExecGrade() const {return this->_execGrade;};

void Form::beSigned( const Bureaucrat& b ) {
	if (!this->_signed) {
		if (b.getGrade() > this->_signGrade) {
			std::cout << PURPLE << b.getName() << " couldn’t sign " << this->_name << " because requires a higher grade\n";
			throw GradeTooLowException();
		}
		std::cout << PURPLE << b.getName() << " signed " << this->_name << "\n";
		this->_signed = true;
	} else {
		std::cout << YELLOW << "This form is already signed\n";
	}
}
