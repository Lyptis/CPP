/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:21:31 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 14:58:29 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	print_upper(std::string str)
{
	for (int i = 0; i < (int)str.size(); i++)
		std::cout << (char)toupper(str[i]);
}


int	main(int argc, char **argv)
{
	int	i = 1;
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		str += argv[i];
		i++;
	}
	print_upper(str);
	std::cout << std::endl;
}
