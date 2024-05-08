/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:14:14 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/08 13:25:14 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{}

Ice::~Ice() 
{}

Ice::Ice(const Ice &ice)
{}

Ice	&Ice::operator=(const Ice &ice)
{
	this->_type = ice._type;
	return (*this);
}

void		use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}

