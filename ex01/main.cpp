/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:15:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/30 13:30:36 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#define SIZE 10

int main()
{
	Animal *animal[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}

	for (int i = 0; i < SIZE; i++)
		animal[i]->makeSound();

	for (int i = 0; i < SIZE; i++)
		delete animal[i];

	return (0);
}