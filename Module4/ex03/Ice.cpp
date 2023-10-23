/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:08:47 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:13:28 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Ice.hpp"

Ice::Ice() : _type("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &Ice) : AMateria(Ice) {
	*this = Ice;
}

Ice	&Ice::operator=(const Ice &Ice) {
	if (this != &Ice)
		this->_type = Ice._type;
	return (*this);
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
