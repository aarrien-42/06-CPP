/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:28:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 12:42:27 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void ) {

	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed a(10), b(20), c(10);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << a * b << std::endl;
		std::cout << a / b << std::endl;
		std::cout << (a > b) << std::endl;
		std::cout << (a < b) << std::endl;
		std::cout << (a >= c) << std::endl;
		std::cout << (a <= b) << std::endl;
		std::cout << (a != c) << std::endl;
		std::cout << (a == c) << std::endl;
		std::cout << Fixed::min(a, b) << std::endl;
	}
	return 0;
}