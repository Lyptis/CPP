/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:10:59 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:22 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inv[4];
		Character();
	public:
		Character(std::string const &name);
		Character(const Character &Character);
		~Character();
		Character	&operator=(const Character &Character);
		std::string const	&getName() const;
};
