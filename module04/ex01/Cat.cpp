/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:16:08 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 16:29:15 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
	return ;
}

const Cat&	Cat::operator=(const Cat& op)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " : meows.." << std::endl;
	return ;
}
