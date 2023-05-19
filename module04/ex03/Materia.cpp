/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:30:41 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/19 10:32:54 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

Materia::Materia(void)
{
	std::cout << "Materia default constructor called" << std::endl;
	this->type = "Materia";
	return ;
}

Materia::Materia(const Materia& copy) : AMateria(copy)
{
	std::cout << "Materia copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Materia&	Materia::operator=(const Materia& op)
{
	std::cout << "Materia copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->type = op.type;
	return *this;
}

Materia::~Materia(void)
{
	std::cout << "Materia destructor called" << std::endl;
	return ;
}

Materia*	Materia::clone() const
{
	return (new Materia());
}

void	Materia::use(ICharacter& target)
{
	std::cout << "* does " << target.getName() << " random shit *" << std::endl;
	return ;
}