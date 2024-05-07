/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:07:41 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/06 16:17:57 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

std::string const	&ICharacter::getName() const {}

void				ICharacter::equip(AMateria* m) {}

void				ICharacter::unequip(int idx) {}

void				ICharacter::use(int idx, ICharacter& target) {}