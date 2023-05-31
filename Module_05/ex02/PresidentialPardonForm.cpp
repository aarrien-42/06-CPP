/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:40:23 by codespace         #+#    #+#             */
/*   Updated: 2023/05/31 09:16:12 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include "PresidentialPardonForm.hpp"

/*-CONSTRUCTOR(ES)-*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("None") {
	std::cout << BLUE << "PresidentialPardonForm: Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << BLUE << "PresidentialPardonForm: Parameter constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ) : AForm("PresidentialPardonForm", 25, 5), _target(obj.getTarget()) {
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
	std::ofstream file((_target + "_shrubbery").c_str());
	file << "      %%%,%%%%%%% \n";
	file << "       ,'%% \\-*%%%%%%% \n";
	file << " ;%%%%%*%   _%%%%' \n";
	file << "  ,%%%       \\(_.*%%%%. \n";
	file << "  % *%%, ,%%%%*(    ' \n";
	file << "%^     ,*%%% )\\|,%%*%,_ \n";
	file << "     *%    \\/ #).-'*%%* \n";
	file << "         _.) ,/ *%, \n";
	file << " _________/)#(_____________ \n";
	file.close();
}
