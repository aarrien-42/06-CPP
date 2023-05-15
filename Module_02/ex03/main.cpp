/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:28:36 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 15:12:27 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void ) {
	{
		Point P1(0, 1), P2(5, 1), P3(2, 4), P(3, 0.5f);
		if (bsp(P1, P2, P3, P))
			std::cout << "Punto dentro del triangulo" << std::endl;
		else
			std::cout << "Punto fuera del triangulo" << std::endl;
	}
	{
		Point P1(0, 0), P2(0, 5.5f), P3(8.625f, 0), P(1, 1.5f);
		if (bsp(P1, P2, P3, P))
			std::cout << "Punto dentro del triangulo" << std::endl;
		else
			std::cout << "Punto fuera del triangulo" << std::endl;
	}
	return 0;
}