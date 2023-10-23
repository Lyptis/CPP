/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:41:54 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:10:27 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_inv[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &MateriaSource)
{
	*this = MateriaSource;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &MateriaSource)
{
	if (this != &MateriaSource)
	{
		for (int i = 0; i < 4; i++)
			this->_inv[i] = MateriaSource._inv[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] == NULL)
			return (this->_inv[i] = m);
	}
	std::cout << "Inventory is full" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i] != NULL && this->_inv[i]->getType() == type)
			return (this->_inv[i]->clone());
	}
	return (NULL);
}

