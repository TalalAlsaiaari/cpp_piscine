/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:43:54 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 20:30:24 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
		void		executeF(void) const;
	
	public:
		PresidentialPardonForm*	clone(std::string) const;
		
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);
};