/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:19 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/13 21:03:32 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"
#include <iostream>
#include <string>

int main( void ) {

	std::string	input;
	Harl		harl;

	std::cout << "Enter a complain: ";
	std::cin >> input;
	harl.complain(input);
	while (input.compare("EXIT"))
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
	}
	return (0);
}
