/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormNotSignedException.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:55:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/30 22:46:36 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm::FormNotSignedException : public std::exception
{
	public:
		virtual const char* what() const throw();
};