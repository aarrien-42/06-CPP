/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:41:05 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/15 13:34:18 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main() {
	{
		std::cout << "\nMUTANT STACK:\n\n";
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\nLIST:\n\n";
		std::list<int> l;
		l.push_back(5);
		l.push_back(17);
		std::cout << l.back() << std::endl;
		l.pop_back();
		std::cout << l.size() << std::endl;
		l.push_back(3);
		l.push_back(5);
		l.push_back(737);
		l.push_back(0);
		std::list<int>::iterator it = l.begin();
		std::list<int>::iterator ite = l.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::list<int> s(l);
	}
	{
		std::cout << "\nTEST 1:\n\n";
		MutantStack<int> M1;
		M1.push(5);
		M1.push(10);
		MutantStack<int> M2(M1);
		M1.push(42);
		std::cout << "M1:\n";
		for (MutantStack<int>::const_iterator it = M1.begin(); it < M1.end(); it++)
			std::cout << *it << "\n";
		std::cout << "M2:\n";
		for (MutantStack<int>::const_iterator it = M2.begin(); it < M2.end(); it++) {
			std::cout << *it << "\n";
			//*it = 2;
		}
	}
	return 0;
}