/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 16:45:44 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s) : name(s), humanBWeapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

std::string	HumanB::getName(void) const
{
	return this->name;
}

void		HumanB::setName(std::string s)
{
	this->name = s;
	return ;
}

std::string	HumanB::getWeapon(void) const
{
	return this->humanBWeapon->getType();
}

void		HumanB::setWeapon(Weapon weap)
{
	this->humanBWeapon->setType(weap.getType());
	return ;
}

void		HumanB::attack(void)
{
	if (humanBWeapon->getType().empty())
		std::cout << getName() << "is unarmed." << std::endl;
	else
		std::cout << getName() << "attacks with their " << humanBWeapon->getType() << std::endl;
	return ;
}