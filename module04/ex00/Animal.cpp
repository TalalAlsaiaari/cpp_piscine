/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:01:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 13:34:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
	return ;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal& op)
{
	std::cout << "Animal copy assignment operator called" <<std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound(void) const
{
	std::cout << this->getType() << " : makes random animal sound" << std::endl;
	return ;
}
