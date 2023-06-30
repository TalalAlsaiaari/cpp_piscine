/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 19:20:29 by talsaiaa         ###   ########.fr       */
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
		class				GradeTooHighException;
		class				GradeTooLowException;
		void				checkSignGrade(int);
		void				checkExecGrade(int);
			
	public:
		std::string	getName(void) const;
		bool		getSignStatus(void) const;
		int			getSignGrade(void) const;
		int			getExecGrade(void) const;
		void		beSigned(const Bureaucrat&);

		Form(void);
		Form(std::string, int, int);
		Form(const Form&);
		Form&	operator=(const Form&);
		~Form(void);
};
std::ostream&	operator<<(std::ostream&, Form const&);