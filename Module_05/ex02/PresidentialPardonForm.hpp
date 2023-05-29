/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:40:12 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:04:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( const PresidentialPardonForm& obj );
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=( const PresidentialPardonForm& obj );

		std::string getTarget() const;
		virtual void execute(Bureaucrat const & executor) const;
};

#endif