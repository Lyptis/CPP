/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyptis <lyptis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:32:05 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/04 13:07:05 by lyptis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	try {
		Span p = Span(5);

		p.addNumber(55);
		p.addNumber(13);
		p.addNumber(175);
		p.addNumber(94);
		p.addNumber(811);

		for (unsigned int i = 0; i < p.getSize(); i++) {
			std::cout << p.at(i) << std::endl;
		}
		std::cout << std::endl;
		std::cout << p.shortestSpan() << std::endl;
		std::cout << p.longestSpan() << std::endl;
		for (unsigned int i = 0; i < p.getSize(); i++) {
			std::cout << p.at(i) << std::endl << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Span p = Span(100000);
		for (unsigned int i = 0; i < p.getSize(); i++) {
			p.addNumber(rand());
		}
		std::cout << std::endl;
		std::cout << p.shortestSpan() << std::endl;
		std::cout << p.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Span p = Span(10);
		p.fill(5, 10, 1);
		for (unsigned int i = 1; i < 10; i++) {
			std::cout << p.at(i) << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
