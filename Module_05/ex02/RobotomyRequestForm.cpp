/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:06:09 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:07:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*-CONSTRUCTOR(ES)-*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("None") {
	std::cout << BLUE << "RobotomyRequestForm: Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << BLUE << "RobotomyRequestForm: Parameter constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj ) : AForm("RobotomyRequestForm", 72, 45), _target(obj.getTarget()) {
	std::cout << BLUE << "RobotomyRequestForm: Copy constructor called\n";
}

/*-DESTRUCTOR-*/

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << BLUE << "RobotomyRequestForm: Destructor called\n";
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& obj ) {
	this->_target = obj.getTarget();
	return *this;
}

/*-FUNCION(ES) MIEMBRO-*/

std::string RobotomyRequestForm::getTarget() const { return _target; };

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	(void)executor;
	//Makes some drilling noises. Then, informs that <target> has been robotomized successfully 50% of the time. Otherwise, informs that the robotomy failed.
}