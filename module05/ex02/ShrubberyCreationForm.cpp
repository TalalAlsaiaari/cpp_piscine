/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:18:04 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/26 20:34:23 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Creation Form", 145, 137), target("default")
{
	std::cout << "Shrubbery Creation Form " << this->getName() << " default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137), target(target)
{
	std::cout << "Shrubbery Creation Form " << this->getName() << " parameterized constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("Shrubbery Creation Form", 145, 137), target(copy.target)
{
	std::cout << "Shrubbery Creation Form " << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	std::cout << "Shrubbery Creation Form " << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery Creation Form " << this->getName() << " default destructor called" << std::endl;
	return ;
}