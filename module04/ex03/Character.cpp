/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:44:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 18:29:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character defualt constructor called" << std::endl;
	this->idx = 0;
	this->name = "default character";
	this->i = 0;
	for(int j = 0; j < 4; j++)
		this->m[j] = NULL;
	return ;
}

Character::Character(std::string name)
{
	std::cout << "Character parameterized constructor called" << std::endl;
	this->idx = 0;
	this->name = name;
	this->i = 0;
	for(int j = 0; j < 4; j++)
		this->m[j] = NULL;
	return ;
}

Character::Character(const Character& copy) : ICharacter(copy)
{
	std::cout << "Character copy constructor called" << std::endl;
	// copies must be deep. the Materias must be deleted before creating
	//the new character.
	*this = copy;
	return ;
}

Character&	Character::operator=(const Character& op)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->idx = op.idx;
	this->name = op.name;
	for(int j = 0; j < 4; j++)
		this->m[j] = op.m[j];
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	// for(int j = 0; j < 4; j++)
	// 	if(this->m[j])
	// 		delete this->m[j];
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
	// equip passed param to the first empty slot in inventory of 4 Matrias.
	// if full, don't do anything but cannot have bugs or leaks.
	this->m[this->i] = m;
	i++;
	return ;
}

void	Character::unequip(int idx)
{
	std::cout << "Character unequip function called" << std::endl;
	// unequip Materia at passed param. if index doesn't exist, do nothing but
	// bugs and leaks are not allowed. MUST NOT delete Materia.
	// save the memory of the unequipped materia before unequipping.
	(void)idx;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	std::cout << "Character use function called" << std::endl;
	// use Materia at idx passed, and pass name to AMatria use.
	this->m[idx]->use(target);
}