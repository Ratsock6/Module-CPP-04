/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMaterial.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/07 12:46:13 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"


class	AMateria
{
	protected:
		std::string	_type;
	public:
	AMateria(std::string const & type);
	AMateria();
	AMateria(const AMateria &materia);
	AMateria &operator=(const AMateria &materia);
	virtual ~AMateria();

	std::string const 	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};