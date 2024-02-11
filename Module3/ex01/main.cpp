/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 11:00:42 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"

int		main()
{
	ClapTrap	Bob("Bob");
	ScavTrap	Phil("Phil");

	Bob.attack("target");
	Bob.takeDamage(5);
	Bob.beRepaired(5);
	Phil.attack("target");
	Phil.takeDamage(5);
	Phil.takeDamage(75);
	Phil.takeDamage(75);
	Phil.beRepaired(5);
	Phil.guardGate();
	return (0);
}
