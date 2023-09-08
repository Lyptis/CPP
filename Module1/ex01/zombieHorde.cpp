/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:01:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:18:55 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie [N];
	for (int i = 0; i < N; i++)
		z[i].set_name(name);
	return (z);
}
