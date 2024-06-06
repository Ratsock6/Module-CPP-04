/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallou-v <aallou-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:10:55 by aallou-v          #+#    #+#             */
/*   Updated: 2024/06/06 15:31:25 by aallou-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria *inventory[4];
public:
	MateriaSource(void);
	virtual ~MateriaSource(void);
	MateriaSource(const MateriaSource &materiaSource);

	MateriaSource &operator=(const MateriaSource &materiaSource);

	virtual void		learnMateria(AMateria *materia);
	virtual AMateria	*createMateria(std::string const &type); 
};