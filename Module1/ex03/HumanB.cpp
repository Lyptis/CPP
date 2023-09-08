/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:48:55 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:52:31 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Weapon.hpp"

HumanB::HumanB()
{
	std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB was destroyed" << std::endl;
}

void HumanB::attack()
{
	std::cout << _name << "attacks with their " << _weapon <<endl;
}
