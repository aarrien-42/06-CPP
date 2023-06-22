/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:57 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/22 14:38:24 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>

class PmergeMe {
	private:
		std::vector<int> _vSequence;
	public:
		PmergeMe();
		PmergeMe( const PmergeMe& obj );
		~PmergeMe();

		PmergeMe& operator=( const PmergeMe& obj );

		std::vector<int> getVector() const;
		void vAddNum( int num );

		std::vector<int>::iterator insertBinarySearch(int num, std::vector<int>::iterator first, std::vector<int>::iterator last);
		void sortVector();
};

std::ostream& operator<<( std::ostream& os, const PmergeMe& obj );

#endif