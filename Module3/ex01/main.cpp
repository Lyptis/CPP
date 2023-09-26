/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:03:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/25 15:06:29 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include "include/ScravTrap.hpp"

int		main()
{
	ClapTrap	ClapTrap("ClapTrap");
	ScravTrap	ScravTrap("ScravTrap");

	ClapTrap.attack("target");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(5);
	ScravTrap.attack("target");
	ScravTrap.takeDamage(5);
	ScravTrap.beRepaired(5);
	ScravTrap.guardGate();
	return (0);
}
