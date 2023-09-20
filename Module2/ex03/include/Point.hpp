/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:57:50 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 14:55:32 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed		_x;
	const Fixed		_y;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &point);
	Point &operator=(const Point &point);


	Fixed	getX(void) const;
	Fixed	getY(void) const;

	~Point();
};

std::ostream &operator<<(std::ostream &o, const Point &point);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
