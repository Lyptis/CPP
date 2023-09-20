/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:56:19 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/13 21:12:45 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "Usage: ./harl <level>" << std::endl;
		return (1);
	}
	std::string	input(argv[1]);
	Harl		harl;

	harl.complain(input);
	return (0);
}
