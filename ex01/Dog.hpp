/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:48:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 16:54:35 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain;
    public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog(void);

		void	makeSound(void) const;
		Dog		&operator=(Dog const &dog);
};