/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:14:14 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 16:20:43 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void): AMateria("ice")
{}

Ice::~Ice() 
{}

Ice::Ice(const Ice &ice): AMateria(ice)
{}

Ice	&Ice::operator=(const Ice &ice)
{
	this->type = ice.type;
	return (*this);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const
{
	return new Ice(*this);
}

