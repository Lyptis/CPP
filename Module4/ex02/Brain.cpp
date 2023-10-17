/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:12 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:28:55 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &Brain) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = Brain;
}

Brain	&Brain::operator=(const Brain &Brain) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &Brain) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = Brain._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(int index, std::string idea) {
	_ideas[index] = idea;
}

std::string	Brain::getIdeas(int index) const {
	return (_ideas[index]);
}
