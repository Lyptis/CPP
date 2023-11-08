/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:20:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 14:21:23 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

# define COLOR_RED "\033[0;31m"
# define COLOR_GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLOR_YELLOW "\033[0;33m"

class	Brain
{
	protected:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &Brain);
		~Brain();
		Brain	&operator=(const Brain &Brain);

		void	setIdeas(int index, std::string idea);
		std::string	getIdeas(int index) const;
};

#endif
