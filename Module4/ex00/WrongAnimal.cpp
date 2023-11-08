/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:03:32 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 14:18:07 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << COLOR_GREEN << "WrongAnimal default constructor called" << COLOR_RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	_type = type;
	std::cout << COLOR_GREEN << "WrongAnimal default constructor called" << COLOR_RESET << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << COLOR_RED << "WrongAnimal default destructor called" << COLOR_RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
	std::cout << COLOR_GREEN << "WrongAnimal copy constructor called" << COLOR_RESET << std::endl;
	*this = WrongAnimal;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal) {
	std::cout << "	" << COLOR_YELLOW << "WrongAnimal assignment operator called" << COLOR_RESET << std::endl;
	if (this != &WrongAnimal) {
		_type = WrongAnimal._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "This is a wrong animal sound" << std::endl;
}
