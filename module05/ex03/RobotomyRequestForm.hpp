/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:40:25 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 20:31:09 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
		void		executeF(void) const;
	
	public:
		RobotomyRequestForm*	clone(std::string) const;
		
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);
};