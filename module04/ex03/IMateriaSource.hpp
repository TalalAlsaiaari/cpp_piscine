/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:06:07 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 18:21:17 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	protected:
		AMateria* slot[4];
		int	i;
	
	public:
		virtual ~IMateriaSource(){}
		virtual void	learnMateria(AMateria*) = 0; //copies the materia passed and store it so it can be cloned later
		virtual AMateria* createMateria(std::string const & type) = 0; //returns new materia which is a copy of the materia previously learned whose type same as the passed. return 0 if type is unknown
		
		IMateriaSource();
		IMateriaSource(const IMateriaSource&);
		IMateriaSource& operator=(const IMateriaSource&);
};

// this should learn templates of Materias to create them when needed. you will be able to generate a new materia using just a string identifying the type