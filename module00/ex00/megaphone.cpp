/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:06:04 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 09:20:25 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char **av)
{
	int 					i = 0;
	std::string				s;
	std::string::iterator	it;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (i = 1; av[i]; i++)
	{
		s = av[i];
		for (it = s.begin(); it != s.end(); it++)
		{
			*it = toupper(*it);
			std::cout << *it;
		}
		if (av[i] && av[i + 1])
			std::cout << ' ';
	}
	std::cout << std::endl;
	return 0;
}
