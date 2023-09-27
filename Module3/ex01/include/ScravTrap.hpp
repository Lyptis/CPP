/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:22:49 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/25 15:04:15 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScravTrap : public ClapTrap
{
	private:
		;
	public:
		ScravTrap();
		ScravTrap(std::string name);
		ScravTrap(const ScravTrap &ScravTrap);
		~ScravTrap();
		ScravTrap	&operator=(const ScravTrap &ScravTrap);

		void	attack(std::string const &target);
		void	guardGate();
};

#endif
