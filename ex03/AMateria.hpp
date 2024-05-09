/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMaterial.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/09 14:50:58 by aallou-v         ###   ########.fr       */
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
	AMateria(void);
	AMateria(const AMateria &materia);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &materia);
	
	AMateria(std::string const &type);

	std::string const 	&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);
};