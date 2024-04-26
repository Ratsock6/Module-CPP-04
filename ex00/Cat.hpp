/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:48:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/26 16:21:51 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Cat: public Animal
{
    public:
		Cat(void);
		Cat(Cat const &dog);
		~Cat(void);

		void	makeSound(void) const;
		Cat		&operator=(Cat const &dog);
};