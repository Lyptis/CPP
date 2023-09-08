/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:45:57 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 14:58:47 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

int	main(void)
{
	Zombie	*zomb;

	zomb = newZombie("Philippe");
	zomb->announce();
	randomChump("Michel");
	delete (zomb);
}
