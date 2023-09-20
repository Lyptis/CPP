/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:01:47 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 14:58:27 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Point.hpp"
#include "include/Fixed.hpp"
#include <cmath>

Point::Point() : _x(0), _y(0) {
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
	std::cout << "Point constructor called" << std::endl;
}

Point::Point(const Point &point) : _x(point._x), _y(point._y) {
	std::cout << "Point copy constructor called" << std::endl;
}

Point::~Point() {
	std::cout << "Point destructor called" << std::endl;
}

Point &Point::operator=(const Point &point) {
	std::cout << "Point assignation operator called" << std::endl;
	if (this != &point)
	{
		(Fixed)_x = point.getX();
		(Fixed)_y = point.getY();
	}
	return (*this);
}

Fixed	Point::getX(void) const{
	return (_x);
}

Fixed	Point::getY(void) const{
	return (_y);
}

std::ostream &operator<<(std::ostream &o, const Point &point) {
	o << "Point(" << point.getX() << ", " << point.getY() << ")";
	return (o);
}
