/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:41:35 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 21:58:27 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	// private:
	// 	std::string cure; //should be used to set types
	
	public:
		Cure(void);
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		~Cure(void);

		Cure* clone() const; //returns a new instance of the same type
		void	use(ICharacter& target); //displays message with name set as target
};