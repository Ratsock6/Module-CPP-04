/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:52:39 by marvin            #+#    #+#             */
/*   Updated: 2024/04/27 16:52:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("wrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongCat): WrongAnimal(wrongCat)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "destructor WrongCat called" << std::endl;
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