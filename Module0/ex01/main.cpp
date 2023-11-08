/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:53:52 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/08 10:26:34 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	std::cout << "Enter a command: ADD, SEARCH, EXIT" << std::endl;

	while (true)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
		{
			std::cout << "Exiting..." << std::endl;
			break;
		}
		else if (input == "ADD")
		{
			phonebook.Add();
		}
		else if (input == "SEARCH")
		{
			phonebook.Search();
		}
		else if (!input.empty())
		{
			std::cout << "Invalid command" << std::endl;
		}
		else if (std::cin.eof())
			return (0);
		std::cin.clear();
	}
	return 0;
}
