/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:08:37 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:14:26 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria"){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &AMateria) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = AMateria;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &AMateria) {
	if (this != &AMateria)
		this->_type = AMateria._type;
	return (*this);
}

std::string const	&AMateria::getType() const {
	return (this->_type);
}

void	AMateria::use(ICharacter &target) {
	std::cout << "* No materia to target " << target.getName() << " *" << std::endl;
}
