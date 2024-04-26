/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:23:27 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/26 15:48:48 by aallou-v         ###   ########.fr       */
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

class Animal
{
	private:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();

		std::string 		getType(void) const;
		void				setType(std::string type);
		virtual void		makeSound(void) const;
};
