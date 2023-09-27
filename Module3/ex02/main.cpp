/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 11:03:58 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScravTrap.hpp"
#include "include/FragTrap.hpp"

int		main()
{
	ClapTrap	ClapTrap("Bob");
	ScravTrap	ScravTrap("Phil");
	FragTrap	Marc("Marc");
	FragTrap	Copy(Marc);

	ClapTrap.attack("this guy");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
	ScravTrap.attack("someone");
	ScravTrap.takeDamage(5);
	ScravTrap.beRepaired(5);
	ScravTrap.guardGate();
	Copy.attack("a wall");
	Copy.beRepaired(5);
	Copy.highFivesGuys();
	return (0);
}
