/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:09:37 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/29 15:11:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Bureaucrat.hpp"
#include "include/Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		// bob.incGrade();
		std::cout << bob << std::endl;
		bob.decGrade();
		std::cout << bob << std::endl;
		Form	classic("classic", 100, 100);
		std::cout << classic << std::endl;
		Bureaucrat philip("philip", 120);
		bob.signForm(classic);
		std::cout << classic << std::endl;
		
	}
	catch (std::exception const& e)
	{
		std::cout << e.what() << std::endl;
	}
}
