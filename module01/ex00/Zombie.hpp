/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:19:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 11:13:03 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

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

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif