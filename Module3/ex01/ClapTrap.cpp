/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:56:21 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 10:31:47 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << COLOR_GREEN << "ClapTrap default constructor called" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << COLOR_GREEN << "ClapTrap name constructor called" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	std::cout << COLOR_GREEN << "ClapTrap copy constructor called" << COLOR_RESET << std::endl;
	*this = ClapTrap;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	std::cout << COLOR_YELLOW << "ClapTrap assignation operator called" << COLOR_RESET << std::endl;
	if (this != &ClapTrap)
	{
		_name = ClapTrap._name;
		_hitPoints = ClapTrap._hitPoints;
		_energyPoints = ClapTrap._energyPoints;
		_attackDamage = ClapTrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_RED << "ClapTrap destructor called" << COLOR_RESET << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Was that a crit ?" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy points! Feed it damn it!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " takes " << amount << " points of damage! Ouch !!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0)
	{
		std::cout << _name << " is repaired for " << amount << " points of damage! It looks patched up tho..." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << _name << " is out of energy points! Feed it damn it!" << std::endl;
}
