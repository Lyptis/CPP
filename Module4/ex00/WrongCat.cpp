/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:34 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 14:18:43 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "	" << COLOR_GREEN << "WrongCat default constructor called" << COLOR_RESET << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << COLOR_RED << "WrongCat default destructor called" << COLOR_RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat){
	std::cout << "	" << COLOR_GREEN << "WrongCat copy constructor called" << COLOR_RESET << std::endl;
	*this = WrongCat;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat) {
	std::cout << COLOR_YELLOW << "WrongCat assignment operator called" << COLOR_RESET << std::endl;
	if (this != &WrongCat) {
		_type = WrongCat._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "This is a wrong cat sound" << std::endl;
}
