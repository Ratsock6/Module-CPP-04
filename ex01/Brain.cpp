/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:05:00 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 17:44:14 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Copy constructor Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Copy assignment operator Brain called" << std::endl;
	this->ideas->clear();
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}