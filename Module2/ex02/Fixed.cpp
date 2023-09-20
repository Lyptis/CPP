/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:41 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 13:18:50 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fixedPointValue = fixed.getRawBits();
	return (*this);
}

float	Fixed::toFloat(void) const {
	return ((float)_fixedPointValue / (1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_fixedPointValue >> _fractionalBits);
}

void	Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

std::ostream	&operator<<(std::ostream &cout, const Fixed &fixed)
{
	cout << fixed.toFloat();
	return (cout);
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (fixed.getRawBits() > _fixedPointValue);
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (fixed.getRawBits() < _fixedPointValue);
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (fixed.getRawBits() >= _fixedPointValue);
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (fixed.getRawBits() <= _fixedPointValue);
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (fixed.getRawBits() == _fixedPointValue);
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (fixed.getRawBits() != _fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	return (Fixed(toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	return (Fixed(toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	return (Fixed(toFloat() * fixed.toFloat()));
}	

Fixed Fixed::operator/(const Fixed &fixed) const {
	return (Fixed(toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator++(void) {
	_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	_fixedPointValue++;
	return (temp);
}

Fixed Fixed::operator--(void) {
	_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	_fixedPointValue--;
	return (temp);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
	return (fixed1.getRawBits() < fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	return (fixed1.getRawBits() > fixed2.getRawBits() ? fixed1 : fixed2);
}

Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() < fixed2.getRawBits() ? (Fixed &)fixed1 : (Fixed &)fixed2);
}

Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	return (fixed1.getRawBits() > fixed2.getRawBits() ? (Fixed &)fixed1 : (Fixed &)fixed2);
}
