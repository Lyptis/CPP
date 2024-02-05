/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:23 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 11:24:11 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "	" << COLOR_GREEN << "Dog default constructor called" << COLOR_RESET << std::endl;
	for (int i = 0; i < 100; i++)
		_brain.setIdeas(i, "DogIdeas");
}

Dog::~Dog(){
	std::cout << COLOR_RED << "Dog default destructor called" << COLOR_RESET << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal(Dog) {
	std::cout << "	" << COLOR_GREEN << "Dog copy constructor called" << COLOR_RESET << std::endl;
	*this = Dog;
}

Dog	&Dog::operator=(const Dog &Dog) {
	std::cout << COLOR_YELLOW << "Dog assignment operator called" << COLOR_RESET << std::endl;
	if (this != &Dog) {
		_type = Dog._type;
		_brain = Dog._brain;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}

void	Dog::think(int i) const {
	std::cout << _brain.getIdeas(i) << std::endl;
}
