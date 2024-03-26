/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:14:54 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/26 08:26:57 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	try {
		std::cout << *easyfind(v, 2) << std::endl;
		std::cout << *easyfind(v, 4) << std::endl;
	} catch (std::exception &e) {
		std::cout << "Element not found" << std::endl;
	}
	
	return 0;
}
