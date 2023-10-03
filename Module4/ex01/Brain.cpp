/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:24:12 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:51:52 by svanmeen         ###   ########.fr       */
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
			Ideas[i] = Brain.Ideas[i];
	}
	return (*this);
}
