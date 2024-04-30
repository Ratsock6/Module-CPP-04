/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:47:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 18:33:46 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	brain = new Brain();
	std::cout << GRAY << "Default constructor Dog called" << RESET << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << GRAY  << "Copy constructor Dog called" << RESET << std::endl;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << GRAY  << "destructor Dog called" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "Wouf !" << RESET << std::endl;
}

Dog		&Dog::operator=(Dog const &dog)
{
	delete this->brain;
	this->brain = new Brain(*dog.brain);
	*static_cast<Animal *>(this) = dog;
	return (*this);
}