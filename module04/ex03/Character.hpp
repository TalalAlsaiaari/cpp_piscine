/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:50:48 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/19 10:34:59 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		std::string const & getName() const;
		void	equip(Materia* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		
		Character();
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();
};