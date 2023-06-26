/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:40:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/26 20:43:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request Form", 72, 45), target("default")
{
	std::cout << "Robotomy Request Form " << this->getName() << " default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45), target(target)
{
	std::cout << "Robotomy Request Form " << this->getName() << " parameterized constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("Robotomy Request Form", 72, 45), target(copy.target)
{
	std::cout << "Robotomy Request Form " << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
{
	std::cout << "Robotomy Request Form " << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Robotomy Request Form " << this->getName() << " default destructor called" << std::endl;
	return ;
}