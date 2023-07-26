/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:21:31 by svanmeen          #+#    #+#             */
/*   Updated: 2023/07/26 14:05:09 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		j = 0;
		while (argv[i][j]) {
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}
