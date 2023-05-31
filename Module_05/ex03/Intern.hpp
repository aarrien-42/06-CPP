/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:47:11 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/31 10:27:03 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern {
	public:
		Intern();
		Intern( const Intern& obj );
		~Intern();

		Intern& operator=( const Intern& obj );

		AForm* makeForm( std::string formName, std::string target );

		class NonExistentForm : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Non-existent form";
				}
		};
};

#endif