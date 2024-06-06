/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:11:45 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 16:20:30 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void): AMateria("cure")
{}

Cure::~Cure() 
{}

Cure::Cure(const Cure &cure): AMateria(cure)
{}

Cure	&Cure::operator=(const Cure &cure)
{
	this->type = cure.type;
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
