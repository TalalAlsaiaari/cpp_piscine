/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:18:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/16 15:31:31 by talsaiaa         ###   ########.fr       */
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

/* the range of values for the passed parameter is [-8388608, 8388608 - 0.00390625)
 calculated by [-2^m-1, 2^m-1 - 2^-n], where n is the fractional bits and m
 is the 32 - n. */
Fixed::Fixed(const int n)
{
	if (n < -8388608 || n >= 8388608)
	{
		std::cout << "Entered number will cause an overflow!" << std::endl;
		exit (1);
	}
	this->raw = roundf(n * (1 << this->bits));
	return ;
}

Fixed::Fixed(const float f)
{
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

bool	Fixed::operator>(const Fixed& obj) const 
{
	return (this->toFloat() > obj.toFloat());
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return (this->toFloat() < obj.toFloat());
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return (this->toFloat() >= obj.toFloat());
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return (this->toFloat() <= obj.toFloat());
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return (this->toFloat() == obj.toFloat());
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return (this->toFloat() != obj.toFloat());
}

Fixed	Fixed::operator+(const Fixed& obj)
{
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj)
{
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj)
{
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj)
{
	return (this->toFloat() / obj.toFloat());
}

Fixed&	Fixed::operator++(void)
{
	this->raw++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	
	this->raw++;
	return (tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->raw--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	
	this->raw--;
	return (tmp);
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	return(lhs < rhs ? lhs:rhs);
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	return(lhs < rhs ? lhs:rhs);
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	return(lhs > rhs ? lhs:rhs);
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	return(lhs > rhs ? lhs:rhs);
}