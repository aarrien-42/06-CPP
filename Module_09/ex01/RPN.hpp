/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:49:22 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/17 20:02:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
	private:
		std::stack<int> _stack;
	public:
		RPN();
		RPN( const RPN& obj );
		~RPN();

		RPN& operator=( const RPN& obj );

		void addNumber( int num );
		void makeOperation( char optr );
		void showStack() const;

		std::stack<int> getStack() const;
};

std::ostream& operator<<( std::ostream& os, const RPN& obj );

#endif