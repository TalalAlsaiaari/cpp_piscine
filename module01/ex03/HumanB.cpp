/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 12:32:38 by talsaiaa         ###   ########.fr       */
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

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void		HumanB::attack(void)
{
	if (!this->weapon)
		std::cout << this->name << " attacks with a knuckle sandwich" << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}