/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:36:05 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 14:53:59 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string name);
		void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
