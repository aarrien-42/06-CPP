/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:40:23 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:25:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*-CONSTRUCTOR(ES)-*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 145, 137), _target("None") {
	std::cout << BLUE << "PresidentialPardonForm: Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 145, 137), _target(target) {
	std::cout << BLUE << "PresidentialPardonForm: Parameter constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ) : AForm("PresidentialPardonForm", 145, 137), _target(obj.getTarget()) {
	std::cout << BLUE << "PresidentialPardonForm: Copy constructor called\n";
}

/*-DESTRUCTOR-*/

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << BLUE << "PresidentialPardonForm: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& obj ) {
	this->_target = obj.getTarget();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

std::string PresidentialPardonForm::getTarget() const { return _target; };

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	//Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it.
}
