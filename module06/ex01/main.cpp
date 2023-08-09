/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:57:23 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 14:16:21 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data x;
	Data *ret;
	uintptr_t y;

	x.n = 5;
	y = Serializer::serialize(&x);
	std::cout << &x << std::endl;
	std::cout << &y << std::endl;
	ret = Serializer::deserialize(y);
	std::cout << ret << std::endl;
	std::cout << ret->n << std::endl;
	std::cout << &x << std::endl;
	std::cout << &y << std::endl;
	return 0;
}