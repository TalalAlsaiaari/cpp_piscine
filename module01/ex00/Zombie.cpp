/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:19:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 11:20:54 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie named: " << getZombieName() << " is destroyed." << std::endl;
	return ;
}

std::string	Zombie::getZombieName(void) const
{
	return this->name;
}

void		Zombie::setZombieName(std::string s)
{
	this->name = s;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << getZombieName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}