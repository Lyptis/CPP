/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:08:41 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:09:22 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(std::string &name) : _name(name) {
	std::cout << "Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(const Character &Character) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = Character;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
}

Character	&Character::operator=(const Character &Character) {
	if (this != &Character) {
		this->_name = Character._name;
		for (int i = 0; i < 4; i++)
			this->_inv[i] = Character._inv[i];
	}
	return (*this);
}

std::string const	&Character::getName() const {
	return (this->_name);
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inv[i] == NULL)
			return (this->_inv[i] = m);
	}
	std::cout << "Inventory is full" << std::endl;
	delete m;
}
