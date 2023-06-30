/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooHighException.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:12:09 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:46:29 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm::GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw();
};