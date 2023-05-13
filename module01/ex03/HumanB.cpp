/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:42:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/13 13:35:54 by talsaiaa         ###   ########.fr       */
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
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
	return ;
}