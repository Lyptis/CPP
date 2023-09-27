/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 10:30:11 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScravTrap.hpp"

int		main()
{
	ClapTrap	ClapTrap("Bob");
	ScravTrap	ScravTrap("Phil");

	ClapTrap.attack("target");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
	ScravTrap.attack("target");
	ScravTrap.takeDamage(5);
	ScravTrap.beRepaired(5);
	ScravTrap.guardGate();
	return (0);
}
