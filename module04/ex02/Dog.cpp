/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:30:39 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 18:02:07 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain();
	*this->brain = *(copy.brain);	
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

const Dog&	Dog::operator=(const Dog& op)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	this->brain = new Brain();
	*this->brain = *(op.brain);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : barks.. woof woof" << std::endl;
	return ;
}
