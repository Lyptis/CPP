/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:41:34 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/30 10:31:12 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Harl.hpp"
#include <iostream>

Harl::Harl()
{
	std::cout << "Harl created" << std::endl;
}
Harl::~Harl()
{
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::_debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
	case 0:
		this->_debug(); // Intentional fallthrough
		// [[fallthrough]]]
	case 1:
		this->_info(); // Intentional fallthrough
		// [[fallthrough]]]
	case 2:
		this->_warning(); // Intentional fallthrough
		// [[fallthrough]]]
	case 3:
		this->_error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
