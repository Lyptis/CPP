/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:45:35 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:41:36 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &Animal);
		virtual ~Animal();
		Animal	&operator=(const Animal &Animal);

		virtual void	makeSound(void) const = 0;
};

#endif
