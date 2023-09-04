/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:22:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/04 13:46:58 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "Error: Incorrect number of arguments. ";
		std::cout << "usage: <executable name> <arguments>\n";
		return 1;
	}
	reversePolishNotation(av[1]);
	return 0;
}