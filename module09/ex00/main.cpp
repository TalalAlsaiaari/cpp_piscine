/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:33:03 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/03 20:11:35 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::fstream inputFile(av[1], std::ios::in);
	if (inputFile.fail())
	{
		std::cout << "Error: Failed to open input file\n";
		return 1;
	}
	try
	{
		bitcoinExchanger(inputFile);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}