/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:15:33 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 18:24:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "FormGradeTooHighException.hpp"
#include "FormGradeTooLowException.hpp"

Form::Form(void) : name("default"), signGrade(150), execGrade(150)
{
	std::cout << "Form " << this->getName() << " default constructor called" << std::endl;
	this->isSigned = false;
	return ;
}

Form::Form(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form " << this->getName() << " parameterized constructor called" << std::endl;
	this->checkSignGrade(signGrade);
	this->checkExecGrade(execGrade);
	this->isSigned = false;
	return ;
}

Form::Form(const Form& copy) : name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
	std::cout << "Form " << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Form&	Form::operator=(const Form& op)
{
	std::cout << "Form " << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->isSigned = op.isSigned;
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form " << this->getName() << " default destructor called" << std::endl;
	return ;
}

std::string	Form::getName(void) const
{
	return this->name;
}

bool	Form::getSignStatus(void) const
{
	return this->isSigned;
}

int	Form::getSignGrade(void) const
{
	return this->signGrade;
}

int	Form::getExecGrade(void) const
{
	return this->execGrade;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	Form::checkSignGrade(int signGrade)
{
	if (signGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150)
		throw GradeTooLowException();
	return ;
}

void	Form::checkExecGrade(int execGrade)
{
	if (execGrade < 1)
		throw GradeTooHighException();
	if (execGrade > 150)
		throw GradeTooLowException();
	return ;
}

void	Form::beSigned(const Bureaucrat& x)
{
	if (x.getGrade() > this->getSignGrade())
	{
		std::cout << x.getName() << " couldn't sign " << this->getName() << " because grade is too low" << std::endl;
		throw GradeTooLowException();
	}
	this->isSigned = true;
	return ;
}

std::ostream&	operator<<(std::ostream& output, Form const& x)
{
	output << "Form Name: " << x.getName() << std::endl;
	if (x.getSignStatus())
		output << "Form Status: signed" << std::endl;
	else if (!x.getSignStatus())
		output << "Form Status: not signed" << std::endl;
	output << "Form Sign Grade: " << x.getSignGrade() << std::endl;
	output << "Form Exec Grade: " << x.getExecGrade() << std::endl;
	return output;
}