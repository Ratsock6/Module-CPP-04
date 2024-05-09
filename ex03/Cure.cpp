/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:11:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/09 15:41:07 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{}

Cure::~Cure() 
{}

Cure::Cure(const Cure &ice)
{}

Cure	&Cure::operator=(const Cure &cure)
{
	this->_type = cure._type;
	return (*this);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*	Cure::clone() const
{
	return new Cure(*this);
}
