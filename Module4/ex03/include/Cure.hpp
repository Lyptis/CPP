/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:00:48 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/23 17:12:27 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class	Cure : public AMateria
{
	private:
		;
	public:
		Cure();
		Cure(const Cure &Cure);
		~Cure();
		Cure	&operator=(const Cure &Cure);
};
