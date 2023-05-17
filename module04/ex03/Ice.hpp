/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:33:36 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 20:46:11 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	ice; //should be used to set types
	
	public:
		Ice(void);
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		~Ice(void);

		Ice* clone() const; //returns a new instance of the same type
		void	use(ICharacter& target);
};