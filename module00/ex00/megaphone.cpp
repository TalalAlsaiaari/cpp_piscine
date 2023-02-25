/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:06:04 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/02/25 19:21:45 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char **av)
{
	int 	i = 0;
	int 	j = 0;
	char	**buff = av;
	
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	av++;
	for (i = 0; av[i]; i++)
	{
		buff[i] = av[i];
		for (j = 0; av[i][j]; j++)
			buff[i][j] = toupper(av[i][j]);
		std::cout << buff[i];
	}
	std::cout << std::endl;
	return 0;
}
