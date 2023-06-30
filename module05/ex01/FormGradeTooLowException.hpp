/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormGradeTooLowException.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 22:13:51 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:47:11 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form::GradeTooLowException : public std::exception
{
	virtual const char* what() const throw();
};