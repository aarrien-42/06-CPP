/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:41:00 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/20 16:59:49 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "No ocurrence found";
		}
};

template <typename T>
typename T::iterator easyfind( T cont, int find ) {
	typename T::iterator it;
	for (it = cont.begin(); it != cont.end(); it++) {
		if (*it == find)
			return it;
	}
	if (it == cont.end())
		throw NotFound();
	return it;
}

#endif