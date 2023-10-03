/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:30:28 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:30:58 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain()){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
	delete	_brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*(Cat._brain));
	*this = Cat;
}

Cat	&Cat::operator=(const Cat &Cat) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &Cat) {
		_type = Cat._type;
		_brain = new Brain(*(Cat._brain));
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}
