/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:30:28 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 13:41:09 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "	" << COLOR_GREEN << "Cat default constructor called" << COLOR_RESET << std::endl;
	_brain = new Brain();
	for (int i = 0; i < 100; i++)
		_brain->setIdeas(i, "CatIdeas");
}

Cat::~Cat(){
	std::cout << COLOR_RED << "Cat default destructor called" << COLOR_RESET << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout << "	" << COLOR_GREEN << "Cat copy constructor called" << COLOR_RESET << std::endl;
	*this = Cat;
}

Cat	&Cat::operator=(const Cat &Cat) {
	std::cout << COLOR_YELLOW << "Cat assignment operator called" << COLOR_RESET << std::endl;
	if (this != &Cat) {
		_type = Cat._type;
		delete _brain;
		_brain = new Brain(*Cat._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}
