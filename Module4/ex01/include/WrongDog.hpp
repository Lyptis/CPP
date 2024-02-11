/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:56:40 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 13:38:03 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"
# include <string>

class WrongDog : public WrongAnimal
{
	private:
		;
	public:
		WrongDog();
		WrongDog(const WrongDog &WrongDog);
		~WrongDog();
		WrongDog	&operator=(const WrongDog &WrongDog);

		void	makeSound(void) const;
};

#endif
