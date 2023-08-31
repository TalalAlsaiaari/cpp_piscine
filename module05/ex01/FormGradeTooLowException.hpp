/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooLowException.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:13:51 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/31 16:16:06 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw();
};