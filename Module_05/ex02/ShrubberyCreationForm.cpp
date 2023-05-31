/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:07 by codespace         #+#    #+#             */
/*   Updated: 2023/05/31 09:15:51 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*-CONSTRUCTOR(ES)-*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("None") {
	std::cout << BLUE << "ShrubberyCreationForm: Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << BLUE << "ShrubberyCreationForm: Parameter constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj ) : AForm("ShrubberyCreationForm", 145, 137), _target(obj.getTarget()) {
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