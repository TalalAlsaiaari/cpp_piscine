/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:38 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/23 20:15:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("default")
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	// try
	// {
	// 	if (grade > 150)
	// 		throw MyException();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
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

void	Bureaucrat::decrementGrade(void)
{
	this->grade++;
}

std::ostream&	operator<<(std::ostream& output, Bureaucrat const& bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}