/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:12:15 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 11:03:28 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure(void);
	~Cure(void);
	Cure(const Cure &cure);

	Cure &operator=(const Cure &cure);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};