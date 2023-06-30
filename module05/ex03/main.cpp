/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 23:27:51 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	/*making sure constructors are working properly*/
	std::cout << "\n~~~ Checking constructors ~~~\n" << std::endl;
	Intern	a;
	Intern	b(a);
	Intern	c;

	c = b;
	
	/*making sure all functionalities are working properly*/
	std::cout << "\n~~~ Checking Functionalities ~~~\n" << std::endl;
	Intern	someRandomIntern;
	Intern	anotherRandomIntern;
	Intern	anotherOne;
	AForm*	scf;
	AForm*	rrf;
	AForm*	ppf;
	try
	{
		Bureaucrat				a("Signer", 25);
		Bureaucrat				b("Executor", 5);

		scf = someRandomIntern.makeForm("shrubbery creation", "Hospital");
		rrf = anotherRandomIntern.makeForm("robotomy request", "Bender");
		ppf = anotherOne.makeForm("presidential pardon", "Agent");
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		a.signForm(*scf);
		a.signForm(*rrf);
		a.signForm(*ppf);
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		b.executeForm(*scf);
		b.executeForm(*rrf);
		b.executeForm(*ppf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	delete scf;
	delete rrf;
	delete ppf;
	
	/*making sure exceptions are working*/
	std::cout << "\n~~~ Checking Bureacrat too low grade for form ~~~\n" << std::endl;
	Intern	intern;
	AForm	*inv;
	try
	{
		inv = intern.makeForm("invalid", "House");
		std::cout << inv << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// no need to delete to *inv because inv does not get created due to exception.
	return 0;
}