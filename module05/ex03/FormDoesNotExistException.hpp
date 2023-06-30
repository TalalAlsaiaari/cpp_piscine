/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormDoesNotExistException.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 22:40:39 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:53:40 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Intern::FormDoesNotExistException : public std::exception
{
	public:
		virtual const char* what() const throw();
};