/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:18:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 20:34:52 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
	return ;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int n)
{
	this->raw = roundf(n * (1 << this->bits));
	return ;
}

Fixed::Fixed(const float f)
{
	// (1 << this->bits) is exactly the same as 2 ^ this->bits
	// this->raw = f * (1 << this->bits);
	// roundf(this->raw);
	this->raw = roundf(f * (1 << this->bits));
	return ;
}

Fixed&	Fixed::operator=(const Fixed& op)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->raw = op.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawbits member function called" << std::endl;
	return this->raw;
}

void	Fixed::setRawBits(int const raw)
{
	this->raw = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return((float) ((float)this->raw / (float)(1 << this->bits)));
}

int		Fixed::toInt(void) const
{
	return(this->raw / (1 << this->bits));
}

// -8388608
// 8388608 - 0.00390625