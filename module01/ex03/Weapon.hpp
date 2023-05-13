/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:37:18 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/13 12:31:50 by talsaiaa         ###   ########.fr       */
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
		std::string const	&getType(void) const;
		void				setType(std::string);

		Weapon(std::string);
		~Weapon(void);
};

#endif