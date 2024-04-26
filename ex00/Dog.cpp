/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:47:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/26 15:58:40 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << GRAY << "Dog: Default constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << GRAY  << "Dog: Copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << GRAY  << "Dog: destructor called" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "Wouf !" << RESET << std::endl;
}

Dog		&Dog::operator=(Dog const &dog)
{
	*static_cast<Animal *>(this) = dog;
	return (*this);
}