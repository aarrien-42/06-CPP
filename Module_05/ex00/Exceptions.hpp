/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:54:24 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/26 17:51:44 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

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

#endif