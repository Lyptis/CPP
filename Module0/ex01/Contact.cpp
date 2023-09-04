/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:16:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/09/04 16:29:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

void Contact::Fill(){
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Enter Phone Number" << std::endl;
	std::getline(std::cin, this->phone_number);
	std::cout << "Enter Secret" << std::endl;
	std::getline(std::cin, this->secret);
	this->timestamp = std::time(NULL);
	std::cout << "Contact added" << std::endl;
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
