/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:40:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/27 21:05:19 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request Form", 72, 45), target("default")
{
	std::cout << this->getName() << " default constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), target(target)
{
	std::cout << this->getName() << " parameterized constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("Robotomy Request Form", 72, 45), target(copy.target)
{
	std::cout << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	std::cout << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	std::cout << "Target: " << this->target << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->getName() << " default destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::executeF(void) const
{
	int	rnd;
	
	std::cout << "* Drilling noises *" << std::endl;
	rnd = rand();
	if (!rnd % 2)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed for " << this->target << std::endl;
	return ;
}