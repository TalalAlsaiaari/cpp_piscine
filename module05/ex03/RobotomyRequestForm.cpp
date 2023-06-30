/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:40:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 21:12:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("robotomy request form", 72, 45), target("default")
{
	std::cout << this->getName() << " default constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request form", 72, 45), target(target)
{
	std::cout << this->getName() << " parameterized constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm("robotomy request form", 72, 45), target(copy.target)
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
	srand(time(0));
	rnd = rand() % 100;
	if ((rnd % 2) == 0)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed for " << this->target << std::endl;
	return ;
}

RobotomyRequestForm*	RobotomyRequestForm::clone(std::string target) const
{
	return(new RobotomyRequestForm(target));
}