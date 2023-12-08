/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:09:37 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 15:52:53 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		bob.incGrade();
		std::cout << bob << std::endl;
		bob.decGrade();
		std::cout << bob << std::endl;
		
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}
