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

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("presidential pardon form", 25, 5), target("default")
{
	std::cout << this->getName() << " default constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon form", 25, 5), target(target)
{
	std::cout << this->getName() << " parameterized constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("presidential pardon form", 25, 5), target(copy.target)
{
	std::cout << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
	std::cout << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	std::cout << "Target: " << this->target << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << this->getName() << " default destructor called" << std::endl;
	return ;
}

void	PresidentialPardonForm::executeF(void) const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebox." << std::endl;
	return ;
}

PresidentialPardonForm*	PresidentialPardonForm::clone(std::string target) const
{
	return (new PresidentialPardonForm(target));
}
