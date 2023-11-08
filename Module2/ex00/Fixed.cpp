/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:41 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 12:20:28 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << COLOR_GREEN << "Default constructor called" << COLOR_RESET << std::endl;
	_fixedPointValue = 0;
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

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << COLOR_YELLOW << "getRawBits member function called" << COLOR_RESET << std::endl;
	return (_fixedPointValue);
}


