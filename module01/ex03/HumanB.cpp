/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/13 12:49:44 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

// std::string	HumanB::getName(void) const
// {
// 	return this->name;
// }

// void		HumanB::setName(std::string s)
// {
// 	this->name = s;
// 	return ;
// }

// std::string	HumanB::getWeapon(void) const
// {
// 	return this->humanBWeapon->getType();
// }

void		HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
	return ;
}

void		HumanB::attack(void)
{
	if (weapon.getType().empty())
		std::cout << this->name << "is unarmed." << std::endl;
	else
		std::cout << this->name << "attacks with their " << weapon.getType() << std::endl;
	return ;
}