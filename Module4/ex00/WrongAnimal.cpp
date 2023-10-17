/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:03:32 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:04:11 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &WrongAnimal) {
		_type = WrongAnimal._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "This is a wrong animal sound" << std::endl;
}
