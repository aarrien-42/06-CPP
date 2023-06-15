/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array<T>.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:05:09 by aarrien-          #+#    #+#             */
/*   Updated: 2023/06/06 18:38:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T* _elements;
		size_t _size;
	public:
		Array();
		Array( unsigned int n );
		Array( const Array<T>& obj );
		~Array();

		Array& operator=( const Array<T>& obj );
		T& operator[]( int index ) const;

		size_t size() const;
		T getElement( int index ) const;

		class IndexOutOfRange : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index out of range";
				}
		};
};

/*-CONSTRUCTOR(ES)-*/

template <typename T>
Array<T>::Array() {
	std::cout << "Array: Default constructor called\n";
	_size = 0;
	_elements = NULL;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n) {
	std::cout << "Array: Parameter constructor called\n";
	_elements = new T[n];
	for (size_t i = 0; i < _size; i++)
		_elements[i] = 0;
}

template <typename T>
Array<T>::Array( const Array<T>& obj ) {
	std::cout << "Array: Copy constructor called\n";
	*this = obj;
}

/*-DESTRUCTOR-*/

template <typename T>
Array<T>::~Array() {
	std::cout << "Array: Destructor called\n";
	delete [] _elements;
}

/*-SOBRECARGA(S) DE OPERADOR(ES)-*/

template <typename T>
Array<T>& Array<T>::operator=( const Array<T>& obj ) {
	_size = obj.size();
	_elements = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_elements[i] = obj.getElement(i);
	return *this;
}

template <typename T>
T& Array<T>::operator[]( int index ) const {
	if (index < 0 || index >= (int)_size)
		throw IndexOutOfRange();
	return _elements[index];
}

template <typename T>
std::ostream& operator<<( std::ostream& o, const Array<T>& obj ) {
	o << "Array: ";
	for (size_t i = 0; i < obj.size(); i++)
		o << "  Index " << i << " => [" << obj.getElement(i) << "] ";
	o << "\n";
	return o;
}

/*-FUNCION(ES) MIEMBRO-*/

template <typename T>
size_t Array<T>::size() const { return this->_size; }

template <typename T>
T Array<T>::getElement( int index ) const {
	if (index < 0 || index >= (int)_size)
		throw IndexOutOfRange();
	return _elements[index];
}

#endif