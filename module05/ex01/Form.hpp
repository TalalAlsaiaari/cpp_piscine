/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/25 23:28:59 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		std::string const	name;
		bool				isSigned;
		int const			signGrade;
		int	const			execGrade;
	
	public:
		class		GradeTooHighException;
		class		GradeTooLowException;
		std::string	getName(void) const;
		bool		getSignStatus(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		void		beSigned(const Bureaucrat&);
		void		checkSignGrade(int);
		void		checkExecGrade(int);

		Form(void);
		Form(std::string, int, int);
		Form(const Form&);
		Form&	operator=(const Form&);
		~Form(void);
};
std::ostream&	operator<<(std::ostream&, Form const&);