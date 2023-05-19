/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:29:34 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/19 12:09:41 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Materia : public AMateria
{
	private:
	// 	std::string Materia; //should be used to set types
	Materia* inventory[4];
	
	public:
		Materia(void);
		Materia(const Materia&);
		Materia& operator=(const Materia&);
		~Materia(void);

		Materia* clone() const; //returns a new instance of the same type
		void	use(ICharacter& target); //displays message with name set as target
};