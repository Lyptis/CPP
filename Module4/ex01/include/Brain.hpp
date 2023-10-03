/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:20:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:21:56 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class	Brain
{
	protected:
		std::string Ideas[100];
	public:
		Brain();
		Brain(const Brain &Brain);
		~Brain();
		Brain	&operator=(const Brain &Brain);
};

#endif
