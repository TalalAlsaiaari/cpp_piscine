/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:43:51 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/26 20:5:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential PardonForm Form", 25, 5), target("default")
{
	std::cout << "Presidential PardonForm Form " << this->getName() << " default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential PardonForm Form", 25, 5), target(target)
{
	std::cout << "Presidential PardonForm Form " << this->getName() << " parameterized constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("Presidential PardonForm Form", 25, 5), target(copy.target)
{
	std::cout << "Presidential PardonForm Form " << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	std::cout << "Presidential PardonForm Form " << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Presidential PardonForm Form " << this->getName() << " default destructor called" << std::endl;
	return ;
}