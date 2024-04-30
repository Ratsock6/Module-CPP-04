/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:48:01 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 13:31:17 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain	*brain;
    public:
		Cat(void);
		Cat(Cat const &dog);
		~Cat(void);

		void	makeSound(void) const;
		Cat		&operator=(Cat const &dog);
};