/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:44:38 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 16:31:40 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string	name;
	AMateria	*inventory[4];
public:
	Character(void);
	virtual ~Character(void);
	Character(const Character &character);
	Character(std::string name);

	Character &operator=(const Character &character);

	std::string const &getName(void) const;
	virtual void equip(AMateria *materia);
	virtual void unequip(int index);
	virtual void use(int index, ICharacter &target);
};