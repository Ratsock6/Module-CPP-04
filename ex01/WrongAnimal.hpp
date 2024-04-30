/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:48:42 by marvin            #+#    #+#             */
/*   Updated: 2024/04/27 16:48:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define GRAY "\e[38;2;100;100;100m"
#define GRAY2 "\e[38;2;75;75;75m"
#define PURPLE "\e[38;2;186;39;249m"
#define PINK "\e[38;2;255;60;247m"
#define WHITE "\e[38;2;255;255;255m"
#define RED "\e[38;2;243;76;76m"
#define ORANGE "\e[38;2;225;118;24m"
#define GREEN "\e[38;2;82;228;66m"
#define RESET "\e[0m"

class WrongAnimal
{
	protected:
		std::string	type;
	public:
						WrongAnimal(void);
						WrongAnimal(std::string const &type);
						WrongAnimal(WrongAnimal const &wrongAnimal);
						~WrongAnimal(void);
		std::string		getType(void) const;
		void			makeSound(void) const;
		WrongAnimal		&operator=(WrongAnimal const &wrongAnimal);
};
