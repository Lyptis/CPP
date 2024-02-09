/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:47:16 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/09 17:17:23 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "	" << COLOR_GREEN << "FragTrap default constructor called" << COLOR_RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "	" << COLOR_GREEN << "FragTrap name constructor called" << COLOR_RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	std::cout << "	" << COLOR_GREEN << "FragTrap copy constructor called" << COLOR_RESET << std::endl;
	*this = FragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << COLOR_RED << "FragTrap destructor called" << COLOR_RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &FragTrap)
{
	std::cout << COLOR_YELLOW << "FragTrap Copy assignment operator called" << COLOR_RESET << std::endl;
	if (this != &FragTrap)
	{
		_name = FragTrap._name;
		_hitPoints = FragTrap._hitPoints;
		_energyPoints = FragTrap._energyPoints;
		_attackDamage = FragTrap._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else if (_hitPoints == 0)
		std::cout << "FragTrap " << _name << " is kinda dead, can't do anything" << std::endl;
	else
		std::cout << "FragTrap " << _name << " has no energy left to attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys ?!" << std::endl;
}
