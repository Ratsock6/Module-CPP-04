/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:52:39 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 12:40:52 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("wrongCat")
{
	std::cout << GRAY << "Default WrongCat constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat): WrongAnimal(wrongCat)
{
	std::cout << GRAY << "Copy constructor WrongCat called" << RESET << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << GRAY << "Destructor WrongCat called" << RESET << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaouuuuuu !" << std::endl;
}

WrongCat		&WrongCat::operator=(WrongCat const &wrongCat)
{
	*static_cast<WrongAnimal *>(this) = wrongCat;
	return (*this);
}