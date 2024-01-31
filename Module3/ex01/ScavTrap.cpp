/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:29:33 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 11:13:01 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "	" << COLOR_GREEN << "ScavTrap default constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "	" << COLOR_GREEN << "ScavTrap name constructor called" << COLOR_RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap)
{
	std::cout << "	" << COLOR_GREEN << "ScavTrap copy constructor called" << COLOR_RESET << std::endl;
	*this = ScavTrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << COLOR_RED << "ScavTrap destructor called" << COLOR_RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ScavTrap)
{
	std::cout << COLOR_YELLOW << "ScavTrap Copy assignment operator called" << COLOR_RESET << std::endl;
	if (this != &ScavTrap)
	{
		_name = ScavTrap._name;
		_hitPoints = ScavTrap._hitPoints;
		_energyPoints = ScavTrap._energyPoints;
		_attackDamage = ScavTrap._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << _name << " has no energy left to attack!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " has entered in Gate keeper mode." << std::endl;
}
