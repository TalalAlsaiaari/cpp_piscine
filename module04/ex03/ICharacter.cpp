/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:07:43 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/19 12:11:31 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default constructor called" << std::endl;
	this->idx = 0;
	this->name = "default character";
	return ;
}

ICharacter::ICharacter(std::string name)
{
	std::cout << "ICharacter parameterized constructor called" << std::endl;
	this->name = name;
	return ;
}

ICharacter::ICharacter(const ICharacter& copy)
{
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this->inventory = *copy.inventory;
	this->idx = copy.idx;
	this->name = copy.name;
	return ;
}

ICharacter&	ICharacter::operator=(const ICharacter& op)
{
	std::cout << "ICharacter copy assignment constructor called" << std::endl;
	if (this == &op)
		return *this;
	*this->m = *op.m;
	this->idx = op.idx;
	this->name = op.name;
	return *this;
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor called" << std::endl;
	return ;
}

