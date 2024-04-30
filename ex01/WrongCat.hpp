/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:51:42 by marvin            #+#    #+#             */
/*   Updated: 2024/04/27 16:51:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
					WrongCat(void);
					WrongCat(WrongCat const &wrongCat);
					~WrongCat(void);
		void		makeSound(void) const;
		WrongCat	&operator=(WrongCat const &wrongCat);
};