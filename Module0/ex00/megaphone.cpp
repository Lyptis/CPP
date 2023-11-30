/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:21:31 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/30 12:01:39 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	print_upper(std::string str)
{
	for (int i = 0; i < (int)str.size(); i++)
		std::cout << (char)toupper(str[i]);
}


int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = 0;
		while (argv[i][j]) {
			str += argv[i][j];
			j++;
		}
		i++;
	}
	print_upper(str);
	std::cout << std::endl;
}
