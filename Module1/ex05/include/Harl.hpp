/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:38:33 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/13 21:00:25 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

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
