/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:31:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 18:16:49 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected:
		// ICharacter* inventory[4];
		int idx;
		int	i;
		std::string name;
	
	public:
		virtual ~ICharacter() = 0;
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0; //equip materia at first empty, 0 to 3:
		virtual void unequip(int idx) = 0; //must not delete the materia
		virtual void use(int idx, ICharacter& target) = 0; //will have to use materia at slot[idx] and pass target to AMateria::use function

		ICharacter();
		ICharacter(std::string name);
		ICharacter(const ICharacter&); //copy functions should be deep, during copy, materias of character should be deleted before new ones added
		ICharacter& operator=(const ICharacter&);
};