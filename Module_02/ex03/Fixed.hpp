/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:00 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 14:47:24 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _frac = 8;
	public:
		Fixed();
		Fixed( const Fixed& obj );
		Fixed( const int raw );
		Fixed( const float raw );
		~Fixed();

		Fixed& operator=( const Fixed& obj );
		Fixed operator+( const Fixed& obj ) const;
		Fixed operator-( const Fixed& obj ) const;
		Fixed operator*( const Fixed& obj ) const;
		Fixed operator/( const Fixed& obj ) const;
		Fixed& operator++( void );
		Fixed& operator--( void );
		Fixed operator++( int );
		Fixed operator--( int );

		bool operator==( const Fixed& obj ) const;
		bool operator!=( const Fixed& obj ) const;
		bool operator<( const Fixed& obj ) const;
		bool operator>( const Fixed& obj ) const;
		bool operator<=( const Fixed& obj ) const;
		bool operator>=( const Fixed& obj ) const;

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		std::ostream& printFixed( std::ostream& o ) const;
		static const Fixed& max( const Fixed& l, const Fixed& r );
		static const Fixed& min( const Fixed& l, const Fixed& r );
		static Fixed& max( Fixed& l, Fixed& r );
		static Fixed& min( Fixed& l, Fixed& r );
};

std::ostream& operator<<( std::ostream& o, const Fixed& f );

#endif