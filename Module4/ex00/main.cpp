/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmeen <svanmeen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:25:24 by svanmeen          #+#    #+#             */
/*   Updated: 2024/02/11 11:28:45 by svanmeen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Dog.hpp"
#include "include/Cat.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/WrongDog.hpp"

int	main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongDog = new WrongDog();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << ">>>>>>>Right animal: " << std::endl;
	std::cout << std::endl;
	std::cout << "animal->makeSound(): " << std::endl;
	animal->makeSound();
	std::cout << "dog->makeSound(): " << std::endl;
	dog->makeSound();
	std::cout << "cat->makeSound(): " << std::endl;
	cat->makeSound();
	std::cout << std::endl;
	std::cout << ">>>>>>>Wrong animal: " << std::endl;
	std::cout << std::endl;
	std::cout << "wrongAnimal->makeSound(): " << std::endl;
	wrongAnimal->makeSound();
	std::cout << "wrongDog->makeSound(): " << wrongDog->getType() << std::endl;
	wrongDog->makeSound();
	std::cout << "wrongCat->makeSound(): " << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongDog;
	delete wrongCat;
	return (0);
}
