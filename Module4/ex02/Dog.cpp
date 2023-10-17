/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:23 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:32:52 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_brain.setIdeas(i, "DogIdeas");
}

Dog::~Dog(){
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &Dog) : Animal(Dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = Dog;
}

Dog	&Dog::operator=(const Dog &Dog) {
	std::cout << "Dog assignment operator called" << std::endl;
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
