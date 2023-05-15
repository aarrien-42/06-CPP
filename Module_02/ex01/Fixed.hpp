/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:15 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 13:55:16 by aarrien-         ###   ########.fr       */
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

		int getRawBits( void ) const;
		void setRawBits ( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		std::ostream& printFixed( std::ostream& o ) const;
};

std::ostream& operator<<( std::ostream& o, const Fixed& f );

#endif