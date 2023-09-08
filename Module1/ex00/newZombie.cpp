/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:14:11 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 14:54:24 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}
