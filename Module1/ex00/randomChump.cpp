/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:21:56 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 14:59:00 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zomb = Zombie(name);
	zomb.announce();
}
