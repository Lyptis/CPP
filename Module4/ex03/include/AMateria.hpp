/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:55:18 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:19:08 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string _type;
		AMateria();
	public:
		AMateria(std::string const &_type);
		AMateria(const AMateria &AMateria);
		~AMateria();

		std::string const getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
		AMateria	&operator=(const AMateria &AMateria);
};
