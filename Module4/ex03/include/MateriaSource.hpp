/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:39:10 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:39 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];
		int			_nbMateria;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &MateriaSource);
		~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &MateriaSource);
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};
