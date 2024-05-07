/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMaterial.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:02 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/07 12:46:33 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMaterial.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria()
{
	_type = "Unamed";
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria &AMateria::operator=(const AMateria &materia)
{
	this->_type = materia._type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return (_type);
}

AMateria	AMateria::*clone()
{}

void	AMateria::use(ICharacter &target)
{}