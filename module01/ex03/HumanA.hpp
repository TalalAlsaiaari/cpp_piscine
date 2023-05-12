/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:00:43 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 16:40:22 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		&humanAWeapon;

	public:
		std::string	getName(void) const;
		void		setName(std::string);
		void		attack(void);

		HumanA(std::string, Weapon&);
		~HumanA(void);
};

#endif