/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:30:28 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 14:22:03 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "	" << COLOR_GREEN << "Cat default constructor called" << COLOR_RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_brain.setIdeas(i, "CatIdeas");
}

Cat::~Cat(){
	std::cout << COLOR_RED << "Cat default destructor called" << COLOR_RESET << std::endl;
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout << "	" << COLOR_GREEN << "Cat copy constructor called" << COLOR_RESET << std::endl;
	*this = Cat;
}

Cat	&Cat::operator=(const Cat &Cat) {
	std::cout << COLOR_YELLOW << "Cat assignment operator called" << COLOR_RESET << std::endl;
	if (this != &Cat) {
		_type = Cat._type;
		_brain = Cat._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Meow Meow" << std::endl;
}

void	Cat::think(int i) const {
	std::cout << _brain.getIdeas(i) << std::endl;
}
