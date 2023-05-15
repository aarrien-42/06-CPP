/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:55:21 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 13:55:22 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int _value;
		static const int _frac = 8;
	public:
		Fixed();
		Fixed( const Fixed& obj );
		~Fixed();
		Fixed& operator=( const Fixed& obj );
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};

#endif