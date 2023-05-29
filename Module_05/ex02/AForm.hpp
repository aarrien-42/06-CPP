/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:37:21 by codespace         #+#    #+#             */
/*   Updated: 2023/05/29 14:48:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm {
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	public:
		AForm();
		AForm(std::string name, int signGrade, int execGrade);
		AForm( const AForm& obj );
		virtual ~AForm();

		AForm& operator=( const AForm& obj );

		const std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		virtual void beSigned( const Bureaucrat& b );
		virtual void execute(Bureaucrat const & executor) const = 0;
		void showRequirements() const;
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too high";
				}
		};
		
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too low";
				}
		};
		
		class FormNotSignedException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Form not signed";
				}
		};
};

std::ostream& operator<<( std::ostream& o, const AForm& b );

#endif