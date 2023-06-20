/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:57 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/20 16:20:43 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>

struct Pair {
	Pair(int num1, int num2) {
		nums[0] = num1;
		nums[1] = num2;
		if (num2!= -1 && num1 > num2)
			std::swap(nums[0], nums[1]);
		pair = num2 != -1;
	}
	int nums[2];
	bool pair;
};

class PmergeMe {
	private:
		std::vector<Pair> _vSequence;
	public:
		PmergeMe();
		PmergeMe( const PmergeMe& obj );
		~PmergeMe();

		PmergeMe& operator=( const PmergeMe& obj );

		std::vector<Pair> getVector() const;
		void addPair( const Pair& p );
		void showVector() const;

		void sortVector();
};

std::ostream& operator<<( std::ostream& os, const PmergeMe& obj );

#endif