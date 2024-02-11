/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:56:41 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:01:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{
	private:
		;
	public:
		WrongCat();
		WrongCat(const WrongCat &WrongCat);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &WrongCat);

		void	makeSound(void) const;
};

#endif
