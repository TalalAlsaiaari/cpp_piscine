/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/25 21:01:46 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try	
	{
		Bureaucrat	a;
		Bureaucrat	b("b", 3);
		Bureaucrat	c(b);
		Bureaucrat	d = c;
		Bureaucrat	e;

		e = d;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		for (int i = 0; i < 100; i++)
		{
			e.incrementGrade();
			std::cout << e << std::endl;
		}
		/* it will not execute the below lines since the exception
			was caught*/
		for (int i = 0; i < 100; i++)
		{
			e.decrementGrade();
			std::cout << e << std::endl;
		}
		std::cout << d << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}


	try
	{
		Bureaucrat	f("f", 149);
		
		std::cout << f << std::endl;
		for (int i = 0; i < 100; i++)
		{
			f.decrementGrade();
			std::cout << f << std::endl;
		}
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}