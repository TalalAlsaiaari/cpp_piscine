/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:23:34 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/17 12:44:17 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	a("Big Boy");
	
	for(int i = 0; i < 15; i++)
	{
		a.attack("Small Boy");
		a.takeDamage(4);
	}
	a.beRepaired(22);
	a.highFivesGuys();
	return 0;
}