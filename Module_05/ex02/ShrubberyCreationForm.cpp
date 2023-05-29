/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:07 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:33:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*-CONSTRUCTOR(ES)-*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 25, 5), _target("None") {
	std::cout << BLUE << "ShrubberyCreationForm: Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 25, 5), _target(target) {
	std::cout << BLUE << "ShrubberyCreationForm: Parameter constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj ) : AForm("ShrubberyCreationForm", 25, 5), _target(obj.getTarget()) {
	std::cout << BLUE << "ShrubberyCreationForm: Copy constructor called\n";
}

/*-DESTRUCTOR-*/

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << BLUE << "ShrubberyCreationForm: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& obj ) {
	this->_target = obj.getTarget();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

std::string ShrubberyCreationForm::getTarget() const { return _target; };

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	std::cout << RED << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}