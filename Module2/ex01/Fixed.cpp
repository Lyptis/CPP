/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:41 by svanmeen          #+#    #+#             */
/*   Updated: 2024/01/31 10:56:07 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << COLOR_GREEN << "Default constructor called" << COLOR_RESET << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << COLOR_GREEN << "Int constructor called" << COLOR_RESET <<std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << COLOR_GREEN << "Float constructor called" << COLOR_RESET << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << COLOR_GREEN << "Copy constructor called" << COLOR_RESET << std::endl << "	" << std::flush;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << COLOR_RED << "Destructor called" << COLOR_RESET << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << COLOR_YELLOW << "Copy assignment operator called" << COLOR_RESET << std::endl << "	" << std::flush;
	if (this != &fixed)
		_fixedPointValue = fixed.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << COLOR_YELLOW << "getRawBits member function called" << COLOR_RESET << std::endl;
	return (_fixedPointValue);
}

std::ostream	&operator<<(std::ostream &cout, const Fixed &fixed)
{
	cout << fixed.toFloat();
	return (cout);
}
