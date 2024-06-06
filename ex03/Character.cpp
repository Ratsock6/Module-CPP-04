/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:44:23 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 22:21:05 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(void): name("Unamed")
{
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character::Character(Character const &character)
{
	operator=(character);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

Character::Character(std::string _name)
{
	name = _name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

Character			&Character::operator=(Character const &character)
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = character.inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = materia;
			//std::cout << name << " vient se s'equiper de " << materia->getType() << " au slot " << i << std::endl;
			return;
		}
	}
}

void	Character::unequip(int index)
{
	inventory[index] = NULL;
}

void	Character::use(int index, ICharacter &target)
{
	if (inventory[index])
		inventory[index]->use(target);
}