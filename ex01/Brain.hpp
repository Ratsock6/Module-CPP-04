/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:05:08 by aallou-v          #+#    #+#             */
/*   Updated: 2024/04/29 13:37:31 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain();
};