/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:24 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 11:30:17 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal("wrongDog") {
	std::cout << "	" << COLOR_GREEN << "WrongDog default constructor called" << COLOR_RESET << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << COLOR_RED << "WrongDog default destructor called" << COLOR_RESET << std::endl;
}

WrongDog::WrongDog(const WrongDog &WrongDog) : WrongAnimal(WrongDog){
	std::cout << "	" << COLOR_GREEN << "WrongDog copy constructor called" << COLOR_RESET << std::endl;
	*this = WrongDog;
}

WrongDog	&WrongDog::operator=(const WrongDog &WrongDog) {
	std::cout << COLOR_YELLOW << "WrongDog assignment operator called" << COLOR_RESET << std::endl;
	if (this != &WrongDog) {
		_type = WrongDog._type;
	}
	return (*this);
}

void	WrongDog::makeSound(void) const {
	std::cout << "This is a wrong dog sound" << std::endl;
}
