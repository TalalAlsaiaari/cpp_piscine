/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:13:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 16:56:29 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	private:
		Brain*	brain;
		
	public:
		void	makeSound(void) const;

		Cat(void);
		Cat(Cat&);
		Cat(const Cat&);
		const Cat& operator=(const Cat&);
		~Cat(void);
};
