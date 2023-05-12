/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:37:18 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 16:39:18 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string	type;
	
	public:
		std::string const	&getType(void);
		void				setType(std::string s);

		Weapon(std::string);
		~Weapon(void);
};

#endif