/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:01:26 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 14:55:33 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

const WrongCat&	WrongCat::operator=(const WrongCat& op)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " : meows.." << std::endl;
	return ;
}
