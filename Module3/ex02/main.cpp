/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/26 11:16:00 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScavTrap.hpp"
#include "include/FragTrap.hpp"

int		main()
{
	ClapTrap	ClapTrap("Bob");
	ScavTrap	ScavTrap("Phil");
	FragTrap	Marc("Marc");
	FragTrap	Copy(Marc);

	ClapTrap.attack("this guy");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
	ScavTrap.attack("someone");
	ScavTrap.takeDamage(5);
	ScavTrap.beRepaired(5);
	ScavTrap.guardGate();
	Copy.attack("a wall");
	Copy.beRepaired(5);
	Marc.highFivesGuys();
	return (0);
}
