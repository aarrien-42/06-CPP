/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:45:51 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/15 13:31:27 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template < typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack< T, Container > {
	public:
		MutantStack() {}
		MutantStack( const MutantStack& obj ) { *this = obj; }
		~MutantStack() {}

		MutantStack& operator=( const MutantStack& obj ) {
			std::stack<T, Container>::operator=(obj);
			return *this;
		}

		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
		const_iterator cbegin() { return this->c.cbegin(); }
		const_iterator cend() { return this->c.cend(); }
		const_reverse_iterator crbegin() { return this->c.crbegin(); }
		const_reverse_iterator crend() { return this->c.crend(); }
};

#endif