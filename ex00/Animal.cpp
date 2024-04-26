/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:20:42 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/26 15:03:07 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << GRAY << "Default constructor called" << RESET << std::endl;
	this->setType("Animal");
}

Animal::Animal(std::string type)
{
	std::cout << GRAY << "Default Name constructor called" << RESET << std::endl;
	this->setType(type);
}

Animal::Animal(const Animal &animal)
{
	std::cout << GRAY << "Copy constructor called" << RESET << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << GRAY << "Copy assignment operator called" << RESET << std::endl;
	this->setType(animal.getType());
	return (*this);
}

Animal::~Animal()
{
	std::cout << GRAY << "Destructor called" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::setType(std::string type)
{
	_type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << RED << "No sound found" << RESET << std::endl;
}