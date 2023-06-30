/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:44:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:52:26 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	AForm;

class	Intern
{
	private:
		AForm*			forms[3];
		class			FormDoesNotExistException;
		void			checkFormName(std::string) const;
	
	public:
		AForm*	makeForm(std::string, std::string);

		Intern(void);
		Intern(const Intern&);
		Intern&	operator=(const Intern&);
		~Intern(void);
};