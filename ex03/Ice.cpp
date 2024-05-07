/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:14:14 by aallou-v          #+#    #+#             */
/*   Updated: 2024/05/07 12:57:14 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::~Ice()
{}

Ice::Ice(const Ice &ice)
{
	
}

Ice	&Ice::operator=(const Ice &ice)
{
	return (new Ice(*this));
}

