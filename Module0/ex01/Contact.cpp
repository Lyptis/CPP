/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:16:09 by svanmeen          #+#    #+#             */
/*   Updated: 2023/07/26 15:26:13 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

void Contact::Add(){
	std::cout << "Enter First Name" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter Last Name" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter Nickname" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter Phone Number" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Enter Secret" << std::endl;
	std::cin >> this->secret;
	std::get_time(this->timestamp, "%R");
}
