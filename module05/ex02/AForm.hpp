/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/27 20:21:41 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		std::string const	name;
		bool				isSigned;
		int const			signGrade;
		int	const			execGrade;
	
	public:
		class			GradeTooHighException;
		class			GradeTooLowException;
		class			FormNotSignedException;
		std::string		getName(void) const;
		bool			getSignStatus(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		void			beSigned(const Bureaucrat&);
		void			checkSignGrade(int);
		void			checkExecGrade(int);
		void			execute(Bureaucrat const&) const;
		virtual void	executeF(void) const = 0;

		AForm(void);
		AForm(std::string, int, int);
		AForm(const AForm&);
		AForm&	operator=(const AForm&);
		virtual ~AForm(void);
};
std::ostream&	operator<<(std::ostream&, AForm const&);