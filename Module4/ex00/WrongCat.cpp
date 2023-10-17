/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:05:34 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:08:33 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &WrongCat) {
		_type = WrongCat._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "This is a wrong cat sound" << std::endl;
}
