/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:48:55 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/12 16:05:22 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"
#include "include/HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB " << _name << " was created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << _name << " was destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << _name << " weapon changed to : " << _weapon->getType() << std::endl;
}

void HumanB::attack()
{
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
