/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:46:56 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 10:30:33 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include <iostream>
#include <string>


/// @brief default constructor
ClapTrap::ClapTrap(void) : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << COLOR_GREEN << "ClapTrap default constructor called" << COLOR_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << COLOR_GREEN << "ClapTrap was created" << COLOR_RESET << std::endl;
}

/// @brief Copy constructor
/// @param claptrap 
ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << COLOR_GREEN << "ClapTrap copy constructor called" << COLOR_RESET << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap(){
	std::cout << COLOR_RED << "ClapTrap destructor called" << COLOR_RESET << std::endl;
}

/// @brief Copy assignment operator
/// @param claptrap 
/// @return copy of `claptrap`
ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap) {
	std::cout << COLOR_YELLOW << "ClapTrap Copy assignment operator called" << COLOR_RESET << std::endl;
	if (this != &claptrap)
	{
		_name = claptrap.getName();
		_hitPoints = claptrap.getHitPoints();
		_energyPoints = claptrap.getEnergyPoints();
		_attackDamage = claptrap.getAttackDamage();
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const{
	return (_name);
}

int			ClapTrap::getHitPoints(void) const{
	return (_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const{
	return (_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const{
	return (_attackDamage);
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << _name << " has no more energy..." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
	std::cout << _name << " took " << amount << " damage! Ouch!" <<std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0)
	{
		std::cout << _name << " got " << amount << " repair point. It looks patched up tho..." << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << _name << " has no more energy..." << std::endl;
}
