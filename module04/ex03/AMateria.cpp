/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:26:35 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 18:31:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->type = "default materia";
	return ;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
	this->type = type;
	return ;
}

AMateria::AMateria(const AMateria& copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AMateria&	AMateria::operator=(const AMateria &op)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

std::string const & AMateria::getType(void) const
{
	return this->type;
}

