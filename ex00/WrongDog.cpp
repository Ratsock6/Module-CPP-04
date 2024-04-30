/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:52:39 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 12:43:24 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal("wrongDog")
{
	std::cout << GRAY << "Default WrongDog constructor called" << RESET << std::endl;
}

WrongDog::WrongDog(WrongDog const &wrongDog): WrongAnimal(wrongDog)
{
	std::cout << GRAY << "Copy constructor WrongDog called" << RESET << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << GRAY << "Destructor WrongDog called" << RESET << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "Wouf !" << std::endl;
}

WrongDog		&WrongDog::operator=(WrongDog const &wrongDog)
{
	*static_cast<WrongAnimal *>(this) = wrongDog;
	return (*this);
}