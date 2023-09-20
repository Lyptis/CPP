/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:35:29 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/12 15:54:01 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string type)
{
	_type = type;
	std::cout << "Weapon created with type : " << _type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

std::string &Weapon::getType()
{
	std::string	&type = _type;
	return (type);
}

void	Weapon::setType(std::string type) {
	_type = type;
	std::cout << "Weapon type changed to : " << _type << std::endl;
}
