/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:10:11 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 11:23:54 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"

Animal::Animal(void){
	_type = "default";
	std::cout << COLOR_GREEN << "Animal default constructor called" << COLOR_RESET << std::endl;
}

Animal::Animal(std::string type){
	_type = type;
	std::cout << COLOR_GREEN << "Animal default constructor called" << COLOR_RESET << std::endl;
}

Animal::~Animal(){
	std::cout << COLOR_RED << "Animal default destructor called" << COLOR_RESET << std::endl;
}

Animal::Animal(const Animal &Animal) {
	std::cout << COLOR_GREEN << "Animal copy constructor called" << COLOR_RESET << std::endl;
	*this = Animal;
}

Animal	&Animal::operator=(const Animal &Animal) {
	std::cout << "	" << COLOR_YELLOW << "Animal assignment operator called" << COLOR_RESET << std::endl;
	if (this != &Animal) {
		_type = Animal._type;
	}
	return (*this);
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound() const{
	std::cout << "This is an animal sound" << std::endl;
}
