/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:41:44 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 10:01:13 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Fixed.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;
std::cout << Fixed::min( a, b ) << std::endl;
std::cout << (a + b) << std::endl;
std::cout << (a - b) << std::endl;
std::cout << (a * b) << std::endl;
std::cout << (a / b) << std::endl;

std::cout << std::endl;

std::cout << "a : " << a << "\nb : " << b << std::endl;

std::cout << (a < b) << std::endl;
std::cout << (a > b) << std::endl;
std::cout << (b < a) << std::endl;
std::cout << (b > a) << std::endl;
return 0;
}
