/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:30:28 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:01:45 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = Cat;
}

Cat	&Cat::operator=(const Cat &Cat) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &Cat) {
		_type = Cat._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}
