/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:51:50 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/20 18:29:36 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << "IMateriaSource constructor called" << std::endl;
	this->i = 0;
	return ;
}

IMateriaSource::IMateriaSource(const IMateriaSource& copy)
{
	std::cout << "IMateriaSource copy constructor called" << std::endl;
	*this = copy;
	return ;
}

IMateriaSource&	IMateriaSource::operator=(const IMateriaSource& op)
{
	std::cout << "IMateriaSource assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->i = op.i;
	return *this;
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "IMateriaSource destructor called" << std::endl;
	return ;
}