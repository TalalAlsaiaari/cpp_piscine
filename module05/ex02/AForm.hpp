/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:27:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 19:20:49 by talsaiaa         ###   ########.fr       */
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
		class				GradeTooHighException;
		class				GradeTooLowException;
		class				FormNotSignedException;
		void				checkSignGrade(int);
		void				checkExecGrade(int);
	
	protected:
		virtual void	executeF(void) const = 0;
	
	public:
		std::string		getName(void) const;
		bool			getSignStatus(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		void			beSigned(const Bureaucrat&);
		void			execute(Bureaucrat const&) const;

		AForm(void);
		AForm(std::string, int, int);
		AForm(const AForm&);
		AForm&	operator=(const AForm&);
		virtual ~AForm(void);
};
std::ostream&	operator<<(std::ostream&, AForm const&);