/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:22:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/07 18:52:58 by talsaiaa         ###   ########.fr       */
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
	std::string args(av[1]);
	for (int i = 2; i < ac; i++)
	{
		args += " ";
		args.append(av[i]);
	}
	reversePolishNotation(args);
	return 0;
}