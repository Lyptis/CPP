/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:04:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:08:47 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog() : WrongAnimal() {
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog default destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &WrongDog) : WrongAnimal(WrongDog){
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = WrongDog;
}

WrongDog	&WrongDog::operator=(const WrongDog &WrongDog) {
	std::cout << "WrongDog assignment operator called" << std::endl;
	if (this != &WrongDog) {
		_type = WrongDog._type;
	}
	return (*this);
}

void	WrongDog::makeSound(void) const {
	std::cout << "This is a wrong dog sound" << std::endl;
}
