/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:47:19 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 11:02:28 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(const AMateria &materia);
	AMateria(std::string const &type);

	AMateria &operator=(const AMateria &materia);

	std::string const	&getType(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};