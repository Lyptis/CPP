/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:24 by svanmeen          #+#    #+#             */
/*   Updated: 2023/10/03 15:15:28 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/WrongDog.hpp"

//Tests
int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongDog();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << ">>>>>>>Test 1: " << std::endl;
	std::cout << std::endl;
	std::cout << "meta->makeSound(): " << std::endl;
	meta->makeSound();
	std::cout << "j->makeSound(): " << std::endl;
	j->makeSound();
	std::cout << "i->makeSound(): " << std::endl;
	i->makeSound();
	std::cout << std::endl;
	std::cout << ">>>>>>>Test 2: " << std::endl;
	std::cout << std::endl;
	std::cout << "wrongMeta->makeSound(): " << std::endl;
	wrongMeta->makeSound();
	std::cout << "wrongJ->makeSound(): " << std::endl;
	wrongJ->makeSound();
	std::cout << "wrongI->makeSound(): " << std::endl;
	wrongI->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongJ;
	delete wrongI;
	return (0);
}
