/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:15:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 16:30:51 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Fixed
{
	private:
		int	raw;
		static const int	bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator= (const Fixed&);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};