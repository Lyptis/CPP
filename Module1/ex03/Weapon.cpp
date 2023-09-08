/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:35:29 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:48:36 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

std::string &Weapon::getType()
{
	std::string	&type;

	type = _type;
	return (type);
}

void	Weapon::Weapon(std::string type)
{
	_type = type;
}
