/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:47:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 12:37:55 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << GRAY << "Default constructor Dog called" << RESET << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << GRAY  << "Copy constructor Dog called" << RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << GRAY  << "destructor Dog called" << RESET << std::endl;
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