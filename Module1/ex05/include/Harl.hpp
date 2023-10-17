/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:38:33 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/04 11:52:20 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>

class Harl
{
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

typedef void (Harl::*fptr)(void);

#endif
