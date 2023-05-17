/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:24:14 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 12:00:26 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->Name = "Unnamed";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
	this->Name = Name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& op)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->Name = op.Name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing "
			<< this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (!this->energyPoints)
		std::cout << "ClapTrap " << this->Name << " does not have energy left!" << std::endl;
	else if (!this->hitPoints)
		std::cout << "ClapTrap " << this->Name << " does not have hit points left!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoints)
		std::cout << "ClapTrap " << this->Name << " is dead!" << std::endl;
	else
	{
		unsigned int res;
		if (this->hitPoints < amount)
			res = 0;
		else
			res = this->hitPoints - amount;
		std::cout << "ClapTrap " << this->Name << " has taken " << amount
			<< " points of damage, leaving them with " << res
			<< " hit points." << std::endl;
		this->hitPoints = res;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPoints)
		std::cout << "ClapTrap " << this->Name << " does not have hit points left!" << std::endl;
	else if (!this->energyPoints)
		std::cout << "ClapTrap " << this->Name << " does not have energy left!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->Name << " has repaired itself for "
			<< amount << " hit points. It now has " << this->hitPoints + amount
			<< " hit points." << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
}