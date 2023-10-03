/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:23 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:52:55 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain()){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog default destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &Dog) : Animal(Dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*(Dog._brain));
	*this = Dog;
}

Dog	&Dog::operator=(const Dog &Dog) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &Dog) {
		_type = Dog._type;
		*(_brain) = *(Dog._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof Woof" << std::endl;
}
