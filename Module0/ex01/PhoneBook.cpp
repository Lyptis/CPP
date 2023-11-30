/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:27:38 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/30 12:15:23 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::Add()
{
	static int i = 0;

	if (i == 8)
	{
		i = 0;
		this->contacts[i].Fill();
	}
	else
		this->contacts[i].Fill();
	i++;
	return;
}

void PhoneBook::Search()
{
	std::string	str;
	char		c;
	int			i;

	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::endl;
	std::cout << "|" << std::setw(10) << "Index"
			  << "|"
			  << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname"
			  << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < 8 && contacts[i].get_first_name().empty())
	{
		if (this->contacts[i].get_first_name().length() > 10)
			std::cout << "|" << std::setw(10) << i << "|" << this->contacts[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << this->contacts[i].get_first_name() << "|";
		if (this->contacts[i].get_last_name().length() > 10)
			std::cout << this->contacts[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
		if (this->contacts[i].get_nickname().length() > 10)
			std::cout << this->contacts[i].get_nickname().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_nickname() << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter an index" << std::endl;
	// i = getindex();
	getline(std::cin, str);
	if (str.length() > 1)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	c = str[0];
	std::cin.clear();
	if (c < 48 || c > 55)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	else if (this->contacts[c - 48].get_first_name() == "")
		std::cout << "Contact not defined" << std::endl;
	else
	{
		std::cout << "First Name: " << this->contacts[c - 48].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->contacts[c - 48].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[c - 48].get_nickname() << std::endl;
		std::cout << "Phone Number: " << this->contacts[c - 48].get_phone_number() << std::endl;
		std::cout << "Secret: " << this->contacts[c - 48].get_secret() << std::endl;
	}
}

int	getindex(void) {
	std::string input;
	std::string charset;

	getline(std::cin, input);
	if(input.empty() || std::cin.eof() || input.size() > 1)
		return (-1);
	input.compare()
}
