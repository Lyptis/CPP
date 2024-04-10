/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:27:11 by svanmeen          #+#    #+#             */
/*   Updated: 2024/04/08 14:15:30 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		std::cout << "usage : ./btc [input.txt]" << std::endl;

	std::map<std::string, float> data;

	try {
		data = parsedata();
		// for (std::map<std::string, float>::const_iterator it = data.begin(); it != data.end(); ++it)
		// 	std::cout << it->first << " = " << it->second << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		parseinput(argv[1], data);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
