/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:29:33 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 10:54:10 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ScravTrap.hpp"

ScravTrap::ScravTrap() : ClapTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScravTrap default constructor called" << std::endl;
}

ScravTrap::ScravTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScravTrap name constructor called" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &ScravTrap)
{
	std::cout << "ScravTrap copy constructor called" << std::endl;
	*this = ScravTrap;
}

ScravTrap::~ScravTrap()
{
	std::cout << "ScravTrap destructor called" << std::endl;
}

ScravTrap	&ScravTrap::operator=(const ScravTrap &ScravTrap)
{
	std::cout << "ScravTrap assignation operator called" << std::endl;
	if (this != &ScravTrap)
	{
		_name = ScravTrap._name;
		_hitPoints = ScravTrap._hitPoints;
		_energyPoints = ScravTrap._energyPoints;
		_attackDamage = ScravTrap._attackDamage;
	}
	return (*this);
}

void	ScravTrap::attack(std::string const &target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ScravTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << "ScravTrap " << _name << " has no energy left to attack!" << std::endl;
}

void	ScravTrap::guardGate()
{
	std::cout << _name << " has entered in Gate keeper mode." << std::endl;
}
