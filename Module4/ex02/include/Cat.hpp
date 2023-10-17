/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:27:48 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:30:01 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class	Cat : public Animal
{
	private:
		Brain	_brain;
	public:
		Cat();
		Cat(const Cat &Cat);
		~Cat();
		Cat	&operator=(const Cat &Cat);

		void	makeSound(void) const;
		void	think(int i) const;
};

#endif
