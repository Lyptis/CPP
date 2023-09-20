/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:32:50 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 15:14:56 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Point.hpp"
#include "include/Fixed.hpp"

Fixed   squareRoot(Fixed const a)
{
	Fixed   x(a);
	Fixed   y(1);
	Fixed   e(0.0000001f);

	while (x - y > e)
	{
		x = (x + y) / 2;
		y = a / x;
	}
	return (x);
}

Fixed	getLength(Point const a, Point const b)
{
	Fixed	ab = Fixed(b.getX() - a.getX());
	Fixed	aby = Fixed(b.getY() - a.getY());
	Fixed	length = squareRoot((ab * ab) + (aby * aby));
	return (length);
}

/// @brief Checking if point is inside triangle
/// @param a Point of triangle
/// @param b Point of triangle
/// @param c Point of triangle
/// @param point Point to check
/// @return true if point is inside triangle, false otherwise
bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ab(getLength(a, b));
	Fixed	bc(getLength(b, c));
	Fixed	ca(getLength(c, a));
	Fixed	hypotenuse(Fixed::max(Fixed::max(ab, bc), ca));

	if (hypotenuse == ab)
	{
		Fixed	teta(bc / ab);
		Fixed	suspect()
	}
	else if (hypotenuse == bc)
	{
	}
	else if (hypotenuse == ca)
	{
	}
	return (false);
}
