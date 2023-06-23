/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:16:03 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/23 20:16:04 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}