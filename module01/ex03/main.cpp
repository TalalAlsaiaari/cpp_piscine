/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:50:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/15 12:34:36 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		
		HumanB jim("Jim");
		jim.attack();
		
		Weapon	club = Weapon("crude spiked club");
		jim.setWeapon(club);
		jim.attack();
		
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}