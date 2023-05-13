/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:19:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/13 19:29:48 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string	line;
	std::string	args[3];
	std::size_t	pos;

	if (ac != 4 || !av[2][0] )
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
		// if (pos != std::string::npos)
		// {
			
		// }
		std::cout << line.replace(pos, args[1].length(), args[2]) << std::endl; // This prints the contents of errors_to_handle.txt
	}
	return 0;
}
