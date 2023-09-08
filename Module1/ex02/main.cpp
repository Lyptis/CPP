/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:22:02 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/08 15:28:33 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "0x of str : " << &str << std::endl;
	std::cout << "0x of strPTR : " << strPTR << std::endl;
	std::cout << "0x of strREF : " << &strREF << std::endl;

	std::cout << std::endl;

	std::cout << "str = " << str << std::endl;
	std::cout << "strPTR = " << *strPTR << std::endl;
	std::cout << "strREF = " << strREF << std::endl;
}
