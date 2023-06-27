/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/27 21:12:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	/*making sure constructors are working properly*/
	std::cout << "\n~~~ Checking constructors ~~~\n" << std::endl;
	try	
	{
		AForm*	a = new ShrubberyCreationForm("home");
		ShrubberyCreationForm	b;
		ShrubberyCreationForm	c(b);
		ShrubberyCreationForm	d = c;
		ShrubberyCreationForm	e;
		ShrubberyCreationForm	f("home");
		RobotomyRequestForm		g;
		PresidentialPardonForm	h("Random Person");

		e = d;
		std::cout << *a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << f << std::endl;
		std::cout << g << std::endl;
		std::cout << h << std::endl;
		delete a;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	/*making sure all functionalities are working properly*/
	std::cout << "\n~~~ Checking Functionalities ~~~\n" << std::endl;
	try
	{
		Bureaucrat					a("Big Boss", 1);
		ShrubberyCreationForm		b("Home");
		RobotomyRequestForm			c("Agent");
		PresidentialPardonForm		d("Prisoner");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		b.beSigned(a);
		c.beSigned(a);
		d.beSigned(a);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(b);
		a.signForm(c);
		a.signForm(d);
		b.execute(a);
		c.execute(a);
		d.execute(a);
		a.executeForm(b);
		a.executeForm(c);
		a.executeForm(d);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	// /*making sure exceptions are working*/
	// std::cout << "\n~~~ Checking Bureacrat too low grade for form ~~~\n" << std::endl;
	// try
	// {
	// 	Bureaucrat	a("New Employee", 150);
	// 	Form		b("New Company", 1, 1);

	// 	std::cout << a << std::endl;
	// 	std::cout << b << std::endl;
	// 	b.beSigned(a);
	// 	std::cout << b << std::endl;
	// 	a.signForm(b);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\n~~~ Checking Invalid Form Grades: Sign Grade ~~~\n" << std::endl;
	// try
	// {
	// 	Form	a("Invalid Form", -2, 10);
	// 	//will not execute below because of exception
	// 	std::cout << a << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// std::cout << "\n~~~ Checking Invalid Form Grades: Exec Grade ~~~\n" << std::endl;
	// try
	// {
	// 	Form	a("Invalid Form", 10, 200);
	// 	//will not execute below because of exception
	// 	std::cout << a << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return 0;
}