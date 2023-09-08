/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:45:57 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:19:50 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Zombie.hpp"

int	main(void)
{
	Zombie *z;
	int		N;

	N = 10;
	z = zombieHorde(N, "[d]");
	for (int i = 0; i < N; i++)
	{
		z[i].announce();
	}
	delete [] z;
	return (0);
}
