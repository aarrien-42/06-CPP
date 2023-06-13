/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:41:00 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/13 17:29:37 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "No ocurrence found";
		}
};

template <typename T>
typename T::iterator easyfind( T cont, int find ) {
	typename T::iterator it = std::find(cont.begin(), cont.end(), find);
	if (it == cont.end())
		throw NotFound();
	return it;
}

#endif