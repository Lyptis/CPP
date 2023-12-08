/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:16:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/12/08 15:29:29 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "Contact.hpp"

Contact::Contact(){
	std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact destroyed" << std::endl;
}

void Contact::Fill(){
	if (first_name != "")
		this->Clear();
	// std::cout << "Enter First Name" << std::endl;
	// while (!(std::cin.eof()) && first_name == "")
	// 	std::getline(std::cin, this->first_name);
	// std::cin.clear();
	// std::cout << "Enter Last Name" << std::endl;
	// while (!(std::cin.eof()) && last_name == "")
	// 	std::getline(std::cin, this->last_name);
	// std::cin.clear();
	// std::cout << "Enter Nickname" << std::endl;
	// while (!(std::cin.eof()) && nickname == "")
	// 	std::getline(std::cin, this->nickname);
	// std::cin.clear();
	// std::cout << "Enter Phone Number" << std::endl;
	// while (!(std::cin.eof()) && phone_number == "")
	// 	std::getline(std::cin, this->phone_number);
	// std::cin.clear();
	// std::cout << "Enter Secret" << std::endl;
	// while (!(std::cin.eof()) && secret == "")
	// 	std::getline(std::cin, this->secret);
	// this->timestamp = std::time(NULL);
	// std::cin.clear();
	// if (!(std::cin.eof()))
	// 	return ;
	// std::cout << "Contact added" << std::endl;
	std::cout << "Enter First Name" << std::endl;
	while (!(std::cin.eof()) && first_name.empty())
		std::getline(std::cin, this->first_name);
	if (std::cin.eof())
		return ;
	std::cout << "Enter Last Name" << std::endl;
	while (!(std::cin.eof()) && last_name.empty())
		std::getline(std::cin, this->last_name);
	if (std::cin.eof())
		return ;
	std::cout << "Enter Nickname" << std::endl;
	while (!(std::cin.eof()) && nickname.empty())
		std::getline(std::cin, this->nickname);
	if (std::cin.eof())
		return ;
	std::cout << "Enter Phone Number" << std::endl;
	while (!(std::cin.eof()) && phone_number.empty())
		std::getline(std::cin, this->phone_number);
	if (std::cin.eof())
		return ;
	std::cout << "Enter Secret" << std::endl;
	while (!(std::cin.eof()) && secret.empty())
		std::getline(std::cin, this->secret);
	if (std::cin.eof())
		return ;
	std::cout << "Contact added" << std::endl;
}

void	Contact::Clear() {
	first_name.erase();
	last_name.erase();
	nickname.erase();
	phone_number.erase();
	secret.erase();
}

std::string Contact::get_first_name(){
	return (this->first_name);
}

std::string Contact::get_last_name(){
	return (this->last_name);
}

std::string Contact::get_nickname(){
	return (this->nickname);
}

std::string Contact::get_secret(){
	return (this->secret);
}

std::string	Contact::get_phone_number(){
	return (this->phone_number);
}

time_t Contact::get_timestamp(){
	return (this->timestamp);
}
