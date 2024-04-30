/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:51:42 by marvin            #+#    #+#             */
/*   Updated: 2024/04/29 12:42:04 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
					WrongDog(void);
					WrongDog(WrongDog const &wrongCat);
					~WrongDog(void);
		void		makeSound(void) const;
		WrongDog	&operator=(WrongDog const &wrongCat);
};