/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:24:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 17:40:04 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	this->i = 0;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& copy) : IMateriaSource(copy)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& op)
{
	std::cout << "MateriaSource assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->i = op.i;
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	return ;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "learnMateria function called" << std::endl;
	this->slot[this->i] = m;
	i++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	std::cout << "createMateria function called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (type == this->slot[i]->getType())
			return this->slot[i]->clone();
	}
	return 0;
}