/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:19:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/14 12:27:21 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::string	line;
	std::string	args[3];
	std::size_t	pos = 0;

	if (ac != 4)
	{
	std::cout << "Invalid number of arguments!" << std::endl;
	return 1;
	}
	av++;
	for (int i = 0; i < ac - 1; i++)
		args[i] = av[i];

	std::ifstream infile(args[0]);
	std::cin.rdbuf(infile.rdbuf()); // Redirect std::cin to errors_to_handle.txt

	std::ofstream outfile(args[0] + ".replace");
	std::cout.rdbuf(outfile.rdbuf()); // Redirect std::cout to outfile.txt

	while (std::getline(std::cin, line))
	{
		pos = line.find(args[1]);
		if (pos == std::string::npos)
			std::cout << line;
		else
		{
			while((pos = line.find(args[1], pos)) != std::string::npos)
			{
				line.erase(pos, args[1].length());
				line.insert(pos, args[2]);
				pos++;
			}
			std::cout << line;
		}
		if (!std::cin.eof())
			std::cout << std::endl;
	}
	return 0;
}
