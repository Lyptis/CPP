/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:39:16 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 14:54:17 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << name << " was created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " was destroyed" << std::endl;
}

void Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
