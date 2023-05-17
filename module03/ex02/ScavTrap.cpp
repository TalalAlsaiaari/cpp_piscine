/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:06:07 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 11:54:51 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	Name = "Unnamed";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string Name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	this->Name = Name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& op)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->Name = op.Name;
	this->hitPoints = op.hitPoints;
	this->energyPoints = op.energyPoints;
	this->attackDamage = op.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints && this->hitPoints)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing "
			<< this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else if (!this->energyPoints)
		std::cout << "ScavTrap " << this->Name << " does not have energy left!" << std::endl;
	else if (!this->hitPoints)
		std::cout << "ScavTrap " << this->Name << " does not have hit points left!" << std::endl;
	return ;
}

void	ScavTrap::gaurdGate(void)
{
	std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode." << std::endl;
	return ;
}