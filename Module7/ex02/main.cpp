/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:43:52 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/26 08:05:18 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main() {
	Array<int> intArray(5);
	Array<std::string> strArray(3);

	try {
		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i;
			std::cout << intArray[i] << std::endl;
		}
		std::cout << std::endl;
		for (unsigned int i = 0; i < strArray.size(); i++) {
			strArray[i] = "Hello";
			std::cout << strArray[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << intArray[5] << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
