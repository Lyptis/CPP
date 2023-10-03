/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:48:19 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

//Tests
int	main(void)
{
	std::cout << "--------Dog a----------" << std::endl;
	Animal* a = new Dog();
	std::cout << "---------------------" << std::endl;
	std::cout << "--------Dog j----------" << std::endl;
	Animal* j = new Dog();
	std::cout << "---------------------" << std::endl;
	std::cout << "--------Cat i----------" << std::endl;
	Animal* i = new Cat();
	std::cout << "---------------------" << std::endl;
	std::cout << "--------A = j----------" << std::endl;
	a = j;
	std::cout << "---------------------" << std::endl;
	std::cout << "--------delete j----------" << std::endl;
	delete j;
	std::cout << "---------------------" << std::endl;
	std::cout << "--------delete a----------" << std::endl;
	delete a;
	std::cout << "---------------------" << std::endl;
	std::cout << "--------delete i----------" << std::endl;
	delete i;
	std::cout << "---------------------" << std::endl;
	return (0);
}
