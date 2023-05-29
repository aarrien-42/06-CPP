/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:05:16 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 15:05:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm& obj );
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=( const RobotomyRequestForm& obj );

		std::string getTarget() const;
		virtual void execute(Bureaucrat const & executor) const;
};

#endif