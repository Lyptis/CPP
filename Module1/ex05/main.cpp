/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:19 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 12:04:03 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"
#include <iostream>
#include <string>

int main(void)
{

	std::string input;
	Harl harl;

	while (!(std::cin.eof()) && input.compare("EXIT"))
	{
		std::cout << "Enter a level: " << std::endl;
		std::cin >> input;
		harl.complain(input);
	}
	return (0);
}
