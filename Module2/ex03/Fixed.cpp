/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:41 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 14:59:03 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _fixedPointValue(0) {}

Fixed::Fixed(const int value)
{
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
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
