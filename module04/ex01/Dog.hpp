/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:30:02 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 16:28:20 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
	private:
		Brain*	brain;
	
	public:
		void	makeSound(void) const;

		Dog(void);
		Dog(const Dog&);
		const Dog& operator=(const Dog&);
		~Dog(void);
};
