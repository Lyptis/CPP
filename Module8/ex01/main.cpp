/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:32:05 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/03 14:36:16 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	try {
		Span p = Span(5);

		for (unsigned int i = 0; i < p.getSize(); i++) {
			p.addNumber(i);
			std::cout << p.at(i) << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
