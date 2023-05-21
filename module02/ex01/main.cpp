/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:15:08 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/21 15:28:31 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed		a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );
	Fixed const	e( 22.5f );
	Fixed f(e);
	Fixed g;
	
	g = f;	
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "g is " << f << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "f is " << f.toInt() << " as integer" << std::endl;
	std::cout << "g is " << f.toInt() << " as integer" << std::endl;
	return 0;
}