/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:56:21 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/21 19:03:14 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = ClapTrap;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ClapTrap)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
}

std::string		ClapTrap::getName() const
{
	return (_name);
}

int		ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

int		ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

int		ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}

void	ClapTrap::attack(std::string const &target)
{
	if (getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Was that a crit ?" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy points! Feed it damn it!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Ouch !!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints() > 0)
	{
		std::cout << "ClapTrap " << _name << " is repaired for " << amount << " points of damage! It looks patched up tho..." << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " is out of energy points! Feed it damn it!" << std::endl;
}
