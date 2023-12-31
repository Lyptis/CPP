/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:44:54 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/12 15:45:17 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"
#include "include/HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{	
	std::cout << "HumanA " << _name << " created with weapon type : " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << "attacks with their " << _weapon.getType() << std::endl;
}
