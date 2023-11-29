/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:16:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/11/29 10:59:13 by svanmeen         ###   ########.fr       */
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
	std::cout << "Enter First Name" << std::endl;
	while (first_name == "")
		std::getline(std::cin, this->first_name);
	std::cout << "Enter Last Name" << std::endl;
	while (last_name == "")
		std::getline(std::cin, this->last_name);
	std::cout << "Enter Nickname" << std::endl;
	while (nickname == "")	
		std::getline(std::cin, this->nickname);
	std::cout << "Enter Phone Number" << std::endl;
	while (phone_number == "")	
		std::getline(std::cin, this->phone_number);
	std::cout << "Enter Secret" << std::endl;
	while (secret == "")	
		std::getline(std::cin, this->secret);
	this->timestamp = std::time(NULL);
	std::cout << "Contact added" << std::endl;
}

void	Contact::Clear() {
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	secret = "";
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
