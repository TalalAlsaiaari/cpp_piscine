/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:28:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/03 14:28:23 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Not enough parameters - usage: <executable name>";
		std::cout << " <literal to convert>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}