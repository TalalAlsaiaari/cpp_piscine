/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 20:28:37 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 23:29:29 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "FormDoesNotExistException.hpp"


Intern::Intern(void)
{
	std::cout << "Intern Default Constructor called" << std::endl;
	this->forms[0] = new ShrubberyCreationForm();
	this->forms[1] = new RobotomyRequestForm();
	this->forms[2] = new PresidentialPardonForm();
	return ;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	this->forms[0] = new ShrubberyCreationForm();
	this->forms[1] = new RobotomyRequestForm();
	this->forms[2] = new PresidentialPardonForm();
	(void)copy;
	return ;
}

Intern&	Intern::operator=(const Intern& op)
{
	std::cout << "Intern Copy Operator Constructor called" << std::endl;
	(void)op;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern Default Destructor called" << std::endl;
	for (int i = 0; i < 3; i++)
		delete this->forms[i];
	return ;
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{	
	std::cout << "Intern makeForm method called" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (formName + " form" == this->forms[i]->getName())
			return this->forms[i]->clone(target);
	}
	throw FormDoesNotExistException();
	return NULL;
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "Form Does Not Exist!";
}