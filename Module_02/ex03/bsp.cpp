/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:54:47 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 15:13:17 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed triangleArea( Point const v1, Point const v2, Point const v3 ) {
	Fixed A((v1.getX() * (v3.getY() - v2.getY())) \
	 + (v2.getX() * (v1.getY() - v3.getY())) \
	 + (v3.getX() * (v2.getY() - v1.getY())));
	if (A < 0)
		A = A * (-1/2.0f);
	else
		A = A * (1/2.0f);
	return A;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed T, T1, T2, T3;
	T = triangleArea(a, b, c);
	T1 = triangleArea(a, b, point);
	T2 = triangleArea(a, point, c);
	T3 = triangleArea(point, b, c);
	std::cout << "T: " << T << std::endl;
	std::cout << "T1: " << T1 << std::endl;
	std::cout << "T2: " << T2 << std::endl;
	std::cout << "T3: " << T3 << std::endl;
	std::cout << "Sum: " << (T1 + T2 + T3) << std::endl;
	if (T1 == 0 || T2 == 0 || T3 == 0) {
		std::cout << "Toca borde" << std::endl;
		return false;
	}
	if (T != (T1 + T2 + T3))
		return false;
	return true;
}