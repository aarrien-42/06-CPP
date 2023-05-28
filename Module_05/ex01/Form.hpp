/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:37:21 by codespace         #+#    #+#             */
/*   Updated: 2023/05/28 18:48:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include "Exceptions.hpp"

class Form {
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form( const Form& obj );
		~Form();

		Form operator=( const Form& obj );

		const std::string getName() const;
		bool getSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned( const Bureaucrat& b );
		
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
};

std::ostream& operator<<( std::ostream& o, const Form& b );

#endif