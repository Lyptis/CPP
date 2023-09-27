/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:46:56 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 10:28:37 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &claptrap) {
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

void		ClapTrap::energyPointsCost(unsigned int amount){
	_energyPoints -= amount;
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
		this->energyPointsCost(1);
	}
	else
		std::cout << "ClapTrap " << _name << " has no more energy..." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << _name << " took " << amount << " damage! Ouch!" <<std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " got " << amount << " repair point. It looks patched up tho..." << std::endl;
		this->energyPointsCost(1);
	}
	else
		std::cout << "ClapTrap " << _name << " has no more energy..." << std::endl;
}
