/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:31:44 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:54:53 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		~Weapon();
		std::string &getType();
		void	setType(std::string	type);
};

#endif
