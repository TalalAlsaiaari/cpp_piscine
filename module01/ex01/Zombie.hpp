/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:52:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 14:42:40 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string	name;
		
	public:
		void		announce(void);
		std::string	getZombieName(void) const;
		void		setZombieName(std::string s);
			
		Zombie(void);
		~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif