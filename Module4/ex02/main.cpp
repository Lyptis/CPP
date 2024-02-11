/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:24 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 15:13:58 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/Brain.hpp"

int	main(void)
{
	Animal* a = new Dog();
	std::cout << "---------------------" << std::endl;
	Animal* i = new Cat();
	std::cout << "---------------------" << std::endl;
	a->makeSound();
	i->makeSound();
	std::cout << std::endl;
	{
		Dog	abc;
		{
			Dog def;
			def = abc;
		}
	}
	std::cout << std::endl;
	delete a;
	std::cout << "---------------------" << std::endl;
	delete i;
	std::cout << "---------------------" << std::endl;

		Animal *array[6];

	for (int i = 0; i < 6; i++) {
		if (i < 3)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i < 6; i++) {
		array[i]->makeSound();
		delete array[i];
	}
	return (0);
}
