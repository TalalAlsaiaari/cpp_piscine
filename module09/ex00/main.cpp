/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:33:03 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/27 19:27:03 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	(void)ac;
	std::fstream inputFile(av[1], std::ios::in);
	if (inputFile.fail())
	{
		std::cout << "Error: could not open input file\n";
		return 1;
	}
	bitcoinExchanger(inputFile);
	return 0;
}