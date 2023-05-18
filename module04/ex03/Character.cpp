/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:44:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/18 16:52:01 by talsaiaa         ###   ########.fr       */
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
	;
}