/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:17:31 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/20 15:02:52 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(int argc, char **argv) {
	uintptr_t ox;
	
	if (argc != 2) {
		std::cout << "usage: ./Serializer [string]" << std::endl;
		return (1);
	}

	
	Data *val = new Data;
	
	val->number = argv[1];
	std::cout << val->number << std::endl;
	ox = Serializer::serialize(val);
	std::cout << ox << std::endl;
	val = Serializer::deserialize(ox);
	std::cout << val->number << std::endl;

	delete val;
}
