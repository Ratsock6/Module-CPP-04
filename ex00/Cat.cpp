/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:47:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 12:37:38 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << GRAY << "Default constructor Cat called" << RESET << std::endl;
}

Cat::Cat(Cat const &cat): Animal(cat)
{
	std::cout << GRAY  << "Copy constructor Cat called" << RESET << std::endl;
}

Cat::~Cat(void)
{
	std::cout << GRAY  << "destructor Cat called" << RESET << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ORANGE << "Miaouuuuuu !" << RESET << std::endl;
}

Cat		&Cat::operator=(Cat const &cat)
{
	*static_cast<Animal *>(this) = cat;
	return (*this);
}