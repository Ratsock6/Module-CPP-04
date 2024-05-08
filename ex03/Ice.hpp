/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:15:03 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/08 13:13:55 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMaterial.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &ice);
		Ice	&operator=(const Ice &ice);

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};