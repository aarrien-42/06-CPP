/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarrien- <aarrien-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:47:49 by aarrien-          #+#    #+#             */
/*   Updated: 2023/05/10 13:57:52 by aarrien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point( const Point& P );
		Point( const Fixed& X, const Fixed& Y );
		~Point();

		Point operator=( const Point& P );

		const Fixed& getX( void ) const;
		const Fixed& getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif