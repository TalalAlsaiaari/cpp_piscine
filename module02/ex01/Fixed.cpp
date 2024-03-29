/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:18:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/21 15:25:39 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->raw = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (n < -8388608 || n >= 8388608)
	{
		std::cout << "Entered number will cause an overflow! Number will be set to 0" << std::endl;
		this->raw = 0;
		return ;
	}
	this->raw = roundf(n * (1 << this->bits));
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (f < -8388608 || f >= 8388607.5f)
	{		
		std::cout << "Entered number will cause an overflow! Number will be set to 0" << std::endl;
		this->raw = 0;
		return ;
	}
	// (1 << this->bits) is exactly the same as 2 ^ this->bits
	this->raw = roundf(f * (1 << this->bits));
	return ;
}

Fixed&	Fixed::operator=(const Fixed& op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->raw = op.getRawBits();
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

std::ostream& operator<<(std::ostream& output, Fixed const& fixed)
{
	output << fixed.toFloat();
	return output;
}
