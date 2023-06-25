/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:38 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/25 20:36:33 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

Bureaucrat::Bureaucrat(void) : name("default")
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	this->grade = grade;
	checkGrade(this->grade);
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& op)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->grade = op.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat default destructor called" << std::endl;
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}


void	Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Grade is " << getGrade() << std::endl;
	return ;
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
	checkGrade(this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	this->grade--;
	checkGrade(this->grade);
}

std::ostream&	operator<<(std::ostream& output, Bureaucrat const& bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}