/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:27:48 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:00:38 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <string>

class	Cat : public Animal
{
	private:
		;
	public:
		Cat();
		Cat(const Cat &Cat);
		~Cat();
		Cat	&operator=(const Cat &Cat);

		void	makeSound(void) const;
};

#endif
