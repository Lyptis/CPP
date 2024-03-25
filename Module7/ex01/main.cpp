/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:10:55 by svanmeen          #+#    #+#             */
/*   Updated: 2024/03/21 15:00:20 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/iter.hpp"

void print(int &i) {
	std::cout << i << std::endl;
}

void print(const int &i) {
	std::cout << i << std::endl;
}

void print(std::string &str) {
	std::cout << str << std::endl;
}

void print(const std::string &str) {
	std::cout << str << std::endl;
}

int main () {

	int tab[] = { 1, 2, 3, 4, 5 };

	iter(tab, 5, &print);
	std::cout << std::endl;
	const int csttab[] = { 1, 2, 3, 4, 5 };

	iter(csttab, 5, &print);
	std::cout << std::endl;
	std::string strtab[] = { "Hello", "World", "!" };

	iter(strtab, 3, &print);
	std::cout << std::endl;
	const std::string cststrtab[] = { "Hello", "World", "!" };

	iter(cststrtab, 3, &print);
	std::cout << std::endl;
}
