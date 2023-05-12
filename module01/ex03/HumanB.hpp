/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:18:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 16:45:49 by talsaiaa         ###   ########.fr       */
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
		Weapon		*humanBWeapon;

	public:
		std::string	getName(void) const;
		std::string	getWeapon(void) const;
		void		setWeapon(Weapon);
		void		setName(std::string);
		void		attack(void);

		HumanB(std::string);
		~HumanB(void);
};

#endif