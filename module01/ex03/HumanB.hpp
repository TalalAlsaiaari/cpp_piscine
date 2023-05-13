/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:18:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/13 12:40:43 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		weapon;

	public:
		// std::string	getName(void) const;
		// std::string	getWeapon(void) const;
		void		setWeapon(Weapon);
		// void		setName(std::string);
		void		attack(void);

		HumanB(std::string);
		~HumanB(void);
};

#endif