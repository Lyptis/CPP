/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2024/01/31 13:17:20 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int		main()
{
	ClapTrap	Bob("Bob");
	ScavTrap	Phil("Phil");
	FragTrap	Marc("Marc");
	FragTrap	Copy(Marc);

	Bob.attack("this guy");
	Bob.takeDamage(5);
	Bob.beRepaired(5);
	Phil.attack("someone");
	Phil.takeDamage(5);
	Phil.beRepaired(5);
	Phil.guardGate();
	Copy.attack("a wall");
	Copy.beRepaired(5);
	Marc.highFivesGuys();

	return (0);
}
