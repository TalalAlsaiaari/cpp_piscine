/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 18:20:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	/*making sure constructors are working properly*/
	std::cout << "\n~~~ Checking constructors ~~~\n" << std::endl;
	try	
	{
		Form	a;
		Form	b("b", 3, 3);
		Form	c(b);
		Form	d = c;
		Form	e;

		e = d;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	/*making sure all functionalities are working properly*/
	std::cout << "\n~~~ Checking Functionalities ~~~\n" << std::endl;
	try
	{
		Bureaucrat	a("Big Boss", 1);
		Form		b("New Contract", 1, 1);
		Form		c("New Employee", 10, 10);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(b);
		a.signForm(c);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*making sure exceptions are working*/
	std::cout << "\n~~~ Checking Bureacrat too low grade for form ~~~\n" << std::endl;
	try
	{
		Bureaucrat	a("New Employee", 150);
		Form		b("New Company", 1, 1);

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.signForm(b);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n~~~ Checking Invalid Form Grades: Sign Grade ~~~\n" << std::endl;
	try
	{
		Form	a("Invalid Form", -2, 10);
		//will not execute below because of exception
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n~~~ Checking Invalid Form Grades: Exec Grade ~~~\n" << std::endl;
	try
	{
		Form	a("Invalid Form", 10, 200);
		//will not execute below because of exception
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}