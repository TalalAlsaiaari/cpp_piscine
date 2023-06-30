/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:18:04 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 21:12:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("shrubbery creation form", 145, 137), target("default")
{
	std::cout << this->getName() << " default constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation form", 145, 137), target(target)
{
	std::cout << this->getName() << " parameterized constructor called" << std::endl;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("shrubbery creation form", 145, 137), target(copy.target)
{
	std::cout << this->getName() << " copy constructor called" << std::endl;
	*this = copy;
	std::cout << "Target: " << this->target << std::endl;
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
{
	std::cout << this->getName() << " copy assignment operator called" << std::endl;
	if (this == &op)
		return *this;
	this->target = op.target;
	std::cout << "Target: " << this->target << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->getName() << " default destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::executeF(void) const
{
	std::fstream	file;
	std::streambuf*	stream_buffer_cout;
	std::streambuf*	stream_buffer_file;
	std::string		filename;

	filename = this->target + "_shrubbery";
	file.open(filename.c_str(), std::ios::out);
	stream_buffer_cout = std::cout.rdbuf();
	stream_buffer_file = file.rdbuf();
	std::cout.rdbuf(stream_buffer_file);
	std::cout << "	           ,@@@@@@@,\n";
	std::cout << "	   ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	std::cout << "	,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	std::cout << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	std::cout << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	std::cout << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	std::cout << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	std::cout << "	   |o|        | |         | |\n";
	std::cout << "	   |.|        | |         | |\n";
	std::cout << "	\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\\\_//__/_" << std::endl;
    std::cout.rdbuf(stream_buffer_cout);
	file.close();
	return ;
}

ShrubberyCreationForm*	ShrubberyCreationForm::clone(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}