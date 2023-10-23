/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:08:54 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:13:21 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Cure.hpp"

Cure::Cure() : _type("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &Cure) : AMateria(Cure) {
	*this = Cure;
}

Cure	&Cure::operator=(const Cure &Cure) {
	if (this != &Cure)
		this->_type = Cure._type;
	return (*this);
}

AMateria	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
