/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:10:34 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/27 19:16:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

	public:
		class		GradeTooHighException;
		class		GradeTooLowException;
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		checkGrade(int);
		void		signForm(const AForm&);
		void		executeForm(AForm const& Form);
		
		Bureaucrat(void);
		Bureaucrat(std::string, int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat(void);
};
std::ostream& operator<<(std::ostream&, Bureaucrat const&);