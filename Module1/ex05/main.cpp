/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:19 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/30 10:29:29 by svanmeen         ###   ########.fr       */
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
		input.clear();
	}
	return (0);
}
