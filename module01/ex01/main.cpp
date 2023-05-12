/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:51:07 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 12:05:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	horde;

	horde = zombieHorde(10, "Hodor");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}