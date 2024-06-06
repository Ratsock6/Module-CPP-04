/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:15:03 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 11:03:47 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &ice);

	Ice &operator=(const Ice &ice);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};