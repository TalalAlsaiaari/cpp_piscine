/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 22:03:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 22:21:20 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
	return ;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Ice&	Ice::operator=(const Ice& op)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type; // maybe this should be removed, cause assigning materia to another, copying the type doesn't make sense
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
	return ;
}