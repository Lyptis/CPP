/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:26:29 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:28:42 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Dog : public Animal
{
	private:
		Brain	_brain;
	public:
		Dog();
		Dog(const Dog &Dog);
		~Dog();
		Dog	&operator=(const Dog &Dog);

		void	makeSound(void) const;
		void	think(int i) const;
};

#endif
