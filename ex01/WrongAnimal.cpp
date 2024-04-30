/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:49:32 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 12:48:09 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("wrongAnimal")
{
	std::cout << GRAY << "Default WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): type(type)
{
	std::cout << GRAY << "All WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal): type(wrongAnimal.type)
{
	std::cout << GRAY << "Copy WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << GRAY << "Destructor WrongAnimal called" << RESET << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << RED << "No sound found" << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &wrongAnimal)
{
	this->type = wrongAnimal.type;
	return (*this);
}