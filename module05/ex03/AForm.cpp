/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:15:33 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:58:04 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "FormGradeTooHighException.hpp"
#include "FormGradeTooLowException.hpp"
#include "FormNotSignedException.hpp"

AForm::AForm(void) : name("default"), signGrade(150), execGrade(150)
{
	std::cout << "AForm " << this->getName() << " default constructor called" << std::endl;
	this->isSigned = false;
	return ;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "AForm " << this->getName() << " parameterized constructor called" << std::endl;
	this->checkSignGrade(signGrade);
	this->checkExecGrade(execGrade);
	this->isSigned = false;
	return ;
}

AForm::AForm(const AForm& copy) : name(copy.name), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
	std::cout << "AForm " << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AForm&	AForm::operator=(const AForm& op)
{
	std::cout << "AForm " << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->isSigned = op.isSigned;
	return *this;
}

AForm::~AForm(void)
{
	std::cout << "AForm " << this->getName() << " default destructor called" << std::endl;
	return ;
}

std::string	AForm::getName(void) const
{
	return this->name;
}

bool	AForm::getSignStatus(void) const
{
	return this->isSigned;
}

int	AForm::getSignGrade(void) const
{
	return this->signGrade;
}

int	AForm::getExecGrade(void) const
{
	return this->execGrade;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	AForm::checkSignGrade(int signGrade)
{
	if (signGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150)
		throw GradeTooLowException();
	return ;
}

void	AForm::checkExecGrade(int execGrade)
{
	if (execGrade < 1)
		throw GradeTooHighException();
	if (execGrade > 150)
		throw GradeTooLowException();
	return ;
}

void	AForm::beSigned(const Bureaucrat& x)
{
	if (x.getGrade() > this->getSignGrade())
	{
		std::cout << x.getName() << " couldn't sign " << this->getName() << " because grade is too low" << std::endl;
		throw GradeTooLowException();
	}
	this->isSigned = true;
	return ;
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (!this->isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > this->execGrade)
	{
		std::cout << executor.getName()  << " coudln't execute " << this->getName() << " because grade is too low" << std::endl;
		throw GradeTooLowException();
	}
	executeF();
	return ;
}

std::ostream&	operator<<(std::ostream& output, AForm const& x)
{
	output << "AForm Name: " << x.getName() << std::endl;
	if (x.getSignStatus())
		output << "AForm Status: signed" << std::endl;
	else if (!x.getSignStatus())
		output << "AForm Status: not signed" << std::endl;
	output << "AForm Sign Grade: " << x.getSignGrade() << std::endl;
	output << "AForm Exec Grade: " << x.getExecGrade() << std::endl;
	return output;
}