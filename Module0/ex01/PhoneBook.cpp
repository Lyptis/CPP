/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 21:27:38 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/04 16:28:28 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	
}

PhoneBook::~PhoneBook(){
	
}

void	PhoneBook::Add(){
	static int	i = 0;

	if (i == 8){
		i = 0;
		this->contacts[i].Fill();
	}
	else
		this->contacts[i].Fill();
	i++;
	return ;
}

void	PhoneBook::Search(){
	int	i;

	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::setw(11) << "|" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|" << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < 8){
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
	std::cin >> i;
	if (i < 0 || i > 7){
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	else{
		std::cout << "First Name: " << this->contacts[i].get_first_name() << std::endl;
		std::cout << "Last Name: " << this->contacts[i].get_last_name() << std::endl;
		std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
		std::cout << "Phone Number: " << this->contacts[i].get_phone_number() << std::endl;
		std::cout << "Secret: " << this->contacts[i].get_secret() << std::endl;
		std::cout << "Timestamp: " << this->contacts[i].get_timestamp() << std::endl;
	}
}
