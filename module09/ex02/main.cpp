/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:08 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/09 09:55:44 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	mergeInsertion(args);
	return 0;
}