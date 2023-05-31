/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:08:05 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:08:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm& obj );
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& obj );

		std::string getTarget() const;
		virtual void execute(Bureaucrat const & executor) const;
};

#endif