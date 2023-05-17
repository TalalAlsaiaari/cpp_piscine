/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:53:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 16:10:27 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	
	public:
		virtual void		makeSound(void) const;
		std::string	getType(void) const;

		Animal(void);
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal(void);
};
