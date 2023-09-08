/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:44:54 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:52:16 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <include/Weapon.hpp>

HumanA::HumanA(){}

HumanA::~HumanA()
{
	std::cout << "HumanA destroyed" << std::endl;
}

HumanA::HumanA(std::string weapon)
{
	_weapon = weapon;
	std::cout << "HumanA created with weapon type : " << _weapon << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << "attacks with their " << _weapon <<endl;
}
