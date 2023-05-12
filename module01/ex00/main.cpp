/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 10:18:25 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 11:31:19 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	zombie;

	zombie.setZombieName("Foo");
	zombie.announce();
	randomChump("randomChump");
	zombie = *newZombie("newZombie");
	zombie.announce();
	return 0;
}