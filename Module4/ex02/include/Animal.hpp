/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:45:35 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/05 11:21:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

# define COLOR_RED "\033[0;31m"
# define COLOR_GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLOR_YELLOW "\033[0;33m"

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
		virtual void	think(int i) const = 0;
};

#endif
