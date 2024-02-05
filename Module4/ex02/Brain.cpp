/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:12 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 11:23:36 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void) {
	std::cout << "	" << COLOR_GREEN << "Brain default constructor called" << COLOR_RESET << std::endl;
}

Brain::~Brain(void) {
	std::cout << COLOR_RED << "Brain default destructor called" << COLOR_RESET << std::endl;
}

Brain::Brain(const Brain &Brain) {
	std::cout << "	" << COLOR_GREEN << "Brain copy constructor called" << COLOR_RESET << std::endl;
	*this = Brain;
}

Brain	&Brain::operator=(const Brain &Brain) {
	std::cout << "		" << COLOR_YELLOW << "Brain assignment operator called" << COLOR_RESET << std::endl;
	if (this != &Brain) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = Brain._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(int index, std::string idea) {
	if (index < 100 && index > 0)
		_ideas[index] = idea;
}

std::string	Brain::getIdeas(int index) const {
	if (index < 100 && index > 0)
		return (_ideas[index]);
	return ("Invalid index...");
}
