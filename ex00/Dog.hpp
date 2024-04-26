/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:48:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/26 15:55:44 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog: public Animal
{
    public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);

		void	makeSound(void) const;
		Dog		&operator=(Dog const &dog);
};