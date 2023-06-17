/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:49:53 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/17 21:08:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*-CONSTRUCTORES-*/

RPN::RPN() {}

RPN::RPN( const RPN& obj ) {
	*this = obj;
}

/*-DESTRUCTOR-*/

RPN::~RPN() {}

/*-SOBRECARGAS DE OPERADORES-*/

RPN& RPN::operator=( const RPN& obj ) {
	_stack = obj.getStack();
	return *this;
}

std::ostream& operator<<( std::ostream& os, const RPN& obj ) {
	obj.showStack();
	return os;
}

/*-MÉTODOS-*/

void RPN::addNumber( int num ) {
	_stack.push(num);
}

void RPN::makeOperation( char optr ) {
	int nums[2];
	for (int i = 0; i < 2; i++) {
		nums[i] = _stack.top();
		_stack.pop();
	}
	switch (optr) {
		case '+':
			_stack.push(nums[1] + nums[0]);
			break;
		case '-':
			_stack.push(nums[1] - nums[0]);
			break;
		case '*':
			_stack.push(nums[1] * nums[0]);
			break;
		case '/':
			_stack.push(nums[1] / nums[0]);
			break;
	}
}

void RPN::showStack() const {
	std::stack<int> copyStack(_stack);
	
	while (!copyStack.empty()) {
		std::cout << " " << copyStack.top() << "\n";
		copyStack.pop();
	}
}

std::stack<int> RPN::getStack() const { return _stack; }


