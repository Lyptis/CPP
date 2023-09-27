/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:47:16 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 11:04:54 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = FragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &FragTrap)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
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
	if (_energyPoints > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << "FragTrap " << _name << " has no energy left to attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives Guys ?!" << std::endl;
}
