/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:02 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 16:01:14 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &_type)
{
	type = _type;
}

AMateria::AMateria()
{
	type = "Unamed";
}

AMateria::AMateria(const AMateria &materia)
{
	*this = materia;
}

AMateria &AMateria::operator=(const AMateria &materia)
{
	this->type = materia.type;
	return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType(void) const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	(void) target;
}