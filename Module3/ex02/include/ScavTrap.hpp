/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:22:49 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/25 15:04:15 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &ScavTrap);
		~ScavTrap();
		ScavTrap	&operator=(const ScavTrap &ScavTrap);

		void	attack(std::string const &target);
		void	guardGate();
};

#endif
