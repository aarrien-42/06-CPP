/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:50:57 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/27 19:36:30 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe {
	private:
		std::vector<int> _vSequence;
		std::deque<int> _dSequence;
	public:
		PmergeMe();
		PmergeMe( const PmergeMe& obj );
		~PmergeMe();

		PmergeMe& operator=( const PmergeMe& obj );

		std::vector<int> getVector() const;
		void vAddNum( int num );

		std::deque<int> getDeque() const;
		void dAddNum( int num );

		void sortVector();
		void sortDeque();


};

std::ostream& operator<<( std::ostream& os, const PmergeMe& obj );

template <typename C>
bool isSorted(const C& container) {
	for (typename C::const_iterator it = container.begin(); it != container.end() - 1; it++) {
		if (*it > *(it+1))
			return false;
	}
	return true;
}

template <typename C>
void showContainer(const C& container) {
	for (typename C::const_iterator it = container.cbegin(); it != container.cend(); it++) {
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

template <typename I>
I insertBinarySearch(int num, I first, I last) {
	if (num <= *first)
		return first;
	if (num >= *last && last - first == 1)
		return last + 1;
	if (*first < num && *last > num && last - first == 1)
		return first + 1;
	if (*(first+(floor((last-first)/2))) > num)
		first = insertBinarySearch(num, first, first+(floor((last-first)/2)));
	else
		first = insertBinarySearch(num, first+(floor((last-first)/2)), last);
	return first;
}

template <typename C>
void sortPairs( C& sequence ) {
	for (typename C::iterator it = sequence.begin(); it < sequence.end() - 1; it+=2) {
		if (*it < *(it+1))
			std::swap(*it, *(it+1));
	}

	for (typename C::iterator it1 = sequence.begin(); it1 < sequence.end() - 3; it1+=2) {
		for (typename C::iterator it2 = it1 + 2; it2 < sequence.end() - 1; it2+=2) {
			if (*it1 > *(it2)) {
				std::swap(*it1, *it2);
				std::swap(*(it1+1), *(it2+1));
			}
		}
	}
}

template <typename C>
void eraseOdd( C& sequence ) {
	if (sequence.size() % 2)
		sequence.erase(sequence.end() - 1);
	for (typename C::iterator it = sequence.begin() + 1; it <= sequence.end(); ((std::is_same<std::deque<int>, C >::value) ? it+=2 : it++ )) {
		sequence.erase(it);
	}
}

template <typename C>
C createSecondChain( C& sequence ) {
	C b;
	for (typename C::iterator it = sequence.begin(); it < sequence.end(); it+=2) {
		(it == sequence.end() - 1) ? b.push_back(*it) : b.push_back(*(it+1));
	}
	eraseOdd(sequence);
	return b;
}

#endif