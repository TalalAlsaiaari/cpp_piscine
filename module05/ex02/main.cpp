/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 19:03:49 by talsaiaa         ###   ########.fr       */
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
		AForm*	a = new ShrubberyCreationForm("Home");
		ShrubberyCreationForm	b;
		ShrubberyCreationForm	c(b);
		ShrubberyCreationForm	d = c;
		ShrubberyCreationForm	e;
		ShrubberyCreationForm	f("Home");
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
		Bureaucrat				a("Signer", 25);
		Bureaucrat				b("Executor", 5);
		ShrubberyCreationForm	c("Office");
		RobotomyRequestForm		d("Agent");
		PresidentialPardonForm	e("Prisoner");
		ShrubberyCreationForm	f("Home");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << f << std::endl;
		a.signForm(c);
		a.signForm(d);
		a.signForm(e);
		a.signForm(f);
		std::cout << c << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << f << std::endl;
		b.executeForm(c);
		b.executeForm(d);
		b.executeForm(e);
		b.executeForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*making sure exceptions are working*/
	std::cout << "\n~~~ Checking Bureacrat too low grade for form ~~~\n" << std::endl;
	try
	{
		Bureaucrat					a("Signer", 150);
		Bureaucrat					b("Executor", 137);
		ShrubberyCreationForm		c("Room");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				a("Signer", 145);
		Bureaucrat				b("Executor", 138);
		ShrubberyCreationForm	c("Room");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat			a("Signer", 73);
		Bureaucrat			b("Executor", 45);
		RobotomyRequestForm	c("Agent");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat			a("Signer", 72);
		Bureaucrat			b("Executor", 46);
		RobotomyRequestForm	c("Agent");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				a("Signer", 26);
		Bureaucrat				b("Executor", 5);
		PresidentialPardonForm	c("Prisoner");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat				a("Signer", 25);
		Bureaucrat				b("Executor", 6);
		PresidentialPardonForm	c("Prisoner");

		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		a.signForm(c);
		std::cout << c << std::endl;
		b.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}