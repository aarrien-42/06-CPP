/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:44:24 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 14:34:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*-CONSTRUCTOR(ES)-*/

AForm::AForm() : _name("NoName"), _signed(false), _signGrade(150), _execGrade(150) {
	std::cout << BLUE << "AForm: Default constructor called\n";
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	std::cout << BLUE << "AForm: Parameter constructor called\n";
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm( const AForm& obj )  : _name(obj.getName()), _signed(obj.getSigned()), _signGrade(obj.getSignGrade()), _execGrade(obj.getExecGrade()) {
	std::cout << BLUE << "AForm: Copy constructor called\n";
}

/*-DESTRUCTOR-*/

AForm::~AForm() {
	std::cout << BLUE << "AForm: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

AForm& AForm::operator=( const AForm& obj ) {
	this->_signed = obj.getSigned();
	return *this;
}

std::ostream& operator<<( std::ostream& o, const AForm& b ) {
	o << CYAN;
	o <<"AForm info:\n";
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

const std::string AForm::getName() const {return this->_name;};

bool AForm::getSigned() const {return this->_signed;};

int AForm::getSignGrade() const {return this->_signGrade;};

int AForm::getExecGrade() const {return this->_execGrade;};

void AForm::beSigned( const Bureaucrat& b ) {
	if (!this->_signed) {
		if (b.getGrade() > this->_signGrade) {
			std::cout << PURPLE << b.getName() << " couldn’t sign " << this->_name << " because requires a higher grade\n";
			throw GradeTooLowException();
		}
		std::cout << PURPLE << b.getName() << " signed " << this->_name << "\n";
		this->_signed = true;
	} else {
		std::cout << YELLOW << "This Aform is already signed\n";
	}
}

void AForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->_execGrade)
		throw GradeTooLowException();
	std::cout << executor.getName() << " executed " << this->_name << "\n";
}

void AForm::showRequirements() const {
	std::cout << CYAN << this->_name << " Aform requirements:\n";
	std::cout << "  To be signed: " << this->_signGrade << "\n";
	std::cout << "  To be executed: " << this->_execGrade << "\n";
}
