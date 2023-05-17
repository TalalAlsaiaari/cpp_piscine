/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:13:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 13:35:23 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	public:
		void	makeSound(void) const;

		Cat(void);
		Cat(const Cat&);
		const Cat& operator=(const Cat&);
		~Cat(void);
};
