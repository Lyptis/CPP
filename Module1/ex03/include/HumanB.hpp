/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:43:00 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 16:00:35 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "include/weapon.hpp"

class HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;
	public:
		HumanB();
		~HumanB();
		void	attack();
};

#endif
