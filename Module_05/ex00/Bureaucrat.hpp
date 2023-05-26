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

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define RED		"\033[0;31m"
#define GREEN	"\033[0;32m"
#define YELLOW	"\033[0;33m"
#define BLUE 	"\033[0;34m"
#define PURPLE	"\033[0;35m"
#define CYAN	"\033[0;36m"
#define BOLD	"\033[0;1m"
#define WHITE	"\033[0;0m"

#include <iostream>

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& obj );
		~Bureaucrat();

		Bureaucrat& operator=( const Bureaucrat& obj );

		const std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

#endif