/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:39:19 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/27 10:55:11 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	private:
		;
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &FragTrap);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &FragTrap);

		void	attack(std::string const	&target);
		void	highFivesGuys(void);
};

#endif
