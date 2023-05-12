/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:24:28 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 16:40:59 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &weap) : name(s), humanAWeapon(weap)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

std::string	HumanA::getName(void) const
{
	return this->name;
}

void		HumanA::setName(std::string s)
{
	this->name = s;
	return ;
}

void		HumanA::attack()
{
	std::cout << getName() << "attacks with their" << humanAWeapon.getType() << std::endl;
	return ;
}