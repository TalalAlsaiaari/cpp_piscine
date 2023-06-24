/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:38 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/24 20:18:18 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Bureaucrat::Bureaucrat(void) : name("default")
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	checkGrade(grade);
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& op)
{
	std::cout << "Bureaucrat copy assignment constructor called" << std::endl;
	if (this == &op)
		return *this;
	this->getName() = op.getName();
	this->grade = op.grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade(void)
{
	this->grade--;
}

void	Bureaucrat::checkGrade(int grade)
{
	if (grade < 1 || grade > 150)
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
		std::cout << "Grade is " << getGrade() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void	Bureaucrat::decrementGrade(void)
{
	this->grade++;
}

std::ostream&	operator<<(std::ostream& output, Bureaucrat const& bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}