/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:15:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 20:03:29 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	private:
		int	raw; // store fixed-point value
		static const int	bits = 8; // number of fractional bits
	
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();
		Fixed(const int); // converts the int into a fixed-point value
		Fixed(const float); // converts the float into a fixed-point value
		int		getRawBits(void) const; // returns raw value of fixed-point
		void	setRawBits(int const raw); // sets raw value
		float	toFloat(void) const; // converts the fixed-point value to a floating-point value
		int		toInt(void) const; // convets the fixed-point value to an integer value
};

std::ostream& operator<<(std::ostream&, Fixed const&); // overload of the operator that inserts a floating point rep of the fixed point