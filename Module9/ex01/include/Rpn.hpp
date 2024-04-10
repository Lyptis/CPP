/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rpn.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:35:40 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/10 16:54:23 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <queue>

class InvalidArgumentException : public std::exception
{
	const char *what() const throw();
};

std::queue<int> parse(std::string str);
int	calc(std::queue<int> *rpn);

typedef int (*op)(int);

#endif
