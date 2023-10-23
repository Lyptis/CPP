/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:00:51 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:31 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:
		;
	public:
		Ice();
		Ice(const Ice &Ice);
		~Ice();
		Ice	&operator=(const Ice &Ice);
};
