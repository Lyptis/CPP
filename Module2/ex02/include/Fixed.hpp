/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:07:43 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 12:59:17 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fixed);

	Fixed 			&operator=(const Fixed &fixed);
	bool			operator>(const Fixed &fixed) const;
	bool			operator<(const Fixed &fixed) const;
	bool			operator>=(const Fixed &fixed) const;
	bool			operator<=(const Fixed &fixed) const;
	bool			operator==(const Fixed &fixed) const;
	bool			operator!=(const Fixed &fixed) const;

	Fixed			operator+( const Fixed &fixed) const;
	Fixed			operator-( const Fixed &fixed) const;
	Fixed			operator*( const Fixed &fixed) const;
	Fixed			operator/( const Fixed &fixed) const;

	Fixed			operator++(void);
	Fixed			operator++(int);
	Fixed			operator--(void);
	Fixed			operator--(int);

	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
	static Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

	~Fixed();

	float			toFloat(void) const;
	int				toInt(void) const;

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &cout, const Fixed &fixed);

#endif
