/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:41:38 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 18:28:28 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span {
	private:
		std::vector<int> numbers;
	public:
		Span();
		Span( unsigned int N );
		Span( const Span& obj );
		~Span();

		Span& operator=( const Span& obj );

		void addNumber();
		int shortestSpan();
		int longestSpan();
};

#endif