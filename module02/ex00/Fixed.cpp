/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:18:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 16:48:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->raw = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	this->raw = copy.raw;
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& op)
{
	if (this == &op)
		return *this;
	this->raw = op.raw;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawbits member function called" << std::endl;
	return this->raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
	return;
}