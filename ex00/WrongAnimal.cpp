/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:49:32 by marvin            #+#    #+#             */
/*   Updated: 2024/04/27 16:49:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("wrongAnimal")
{
	std::cout << GRAY << "Default WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): type(type)
{
	std::cout << "All WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal): type(wrongAnimal.type)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << " destructor WrongAnimal called" << std::endl;
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