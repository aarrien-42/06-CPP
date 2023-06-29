/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:49:22 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/29 15:46:45 by aarrien-         ###   ########.fr       */
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
		int makeOperation( char optr );
		void showStack() const;

		std::stack<int> getStack() const;
};

std::ostream& operator<<( std::ostream& os, const RPN& obj );

#endif