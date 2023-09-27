/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:10:11 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 14:49:52 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"

Animal::Animal(void){
	_type = "default";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &Animal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = Animal;
}

Animal	&Animal::operator=(const Animal &Animal) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &Animal) {
		_type = Animal._type;
	}
	return (*this);
}

void	Animal::makeSound() {
	std::cout << "This is an animal sound" << std::endl;
}
