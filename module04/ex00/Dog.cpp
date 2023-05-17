/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:30:39 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 14:53:40 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

const Dog&	Dog::operator=(const Dog& op)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : barks.. woof woof" << std::endl;
	return ;
}
