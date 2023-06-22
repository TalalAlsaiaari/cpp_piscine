/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:34 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/22 23:45:33 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;
	public:
		int	getGrade(void) const;
		std::string	getName(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		
		
		Bureaucrat(void);
		Bureaucrat(int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat(void);
};

std::ostream& operator<<(std::ostream&, Bureaucrat const&);