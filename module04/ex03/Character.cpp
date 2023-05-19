/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:44:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/19 10:11:27 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character defualt constructor called" << std::endl;
	this->idx = 0;
	this->name = "default character";
	return ;
}

Character::Character(std::string name)
{
	std::cout << "Character parameterized constructor called" << std::endl;
	this->idx = 0;
	this->name = name;
	return ;
}

Character::Character(const Character& copy) : ICharacter(copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Character&	Character::operator=(const Character& op)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	*this->m = *op.m;
	this->idx = op.idx;
	this->name = op.name;
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	return ;
}

std::string	const & Character::getName() const
{
	std::cout << "Character getName function called" << std::endl;
	return this->name;
}

void	Character::equip(AMateria* m)
{
	std::cout << "Character equip function called" << std::endl;
	
}