/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 12:47:23 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << meta->getType() + " " << std::endl;
	std::cout << dog->getType() + " " << " " << std::endl;
	std::cout << cat->getType() + " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete cat;
	delete dog;
	delete meta;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongDog = new WrongDog();
	const WrongAnimal* wrongCat = new WrongCat();
	
	std::cout << wrongAnimal->getType() + " " << std::endl;
	std::cout << wrongDog->getType() + " " << " " << std::endl;
	std::cout << wrongCat->getType() + " " << std::endl;
	wrongCat->makeSound();
	wrongDog->makeSound();
	wrongAnimal->makeSound();

	delete wrongCat;
	delete wrongDog;
	delete wrongAnimal;
	
	return (0);
}