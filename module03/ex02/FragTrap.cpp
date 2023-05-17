/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:24:15 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 12:27:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	Name = "Unnamed";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string Name)
{
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	this->Name = Name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& op)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->Name = op.Name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.attackDamage;
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name << " requests a positive round of high fived" << std::endl;
	return ;
}