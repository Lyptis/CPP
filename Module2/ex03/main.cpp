/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:41:44 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/20 14:59:47 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Point.hpp"
#include "include/Fixed.hpp"
#include <iostream>

int main( void ) {

	Point a(6.0f, 3.0f);
	Point b(2.0f, 5.0f);
	Point c(1.0f, 1.0f);
	Point point(3.0f, 4.0f);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "point = " << point << std::endl;

	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point) << std::endl;

	return (0);

}
