/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:08:56 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/01 07:10:05 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <ctype.h>

void    myToUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	std::cout << c;
	return ;
}

int main()
{
	// Testing iter with an integer array
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Testing with int array: ";
	iter(intArray, intArrayLength, printElement<int>);
	std::cout << std::endl;

	// Testing iter with a double array
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

	std::cout << "Testing with double array: ";
	iter(doubleArray, doubleArrayLength, printElement<double>);
	std::cout << std::endl;

	// Testing iter with a character array
	char    charArray[] = "test Array";
	size_t charArrayLength = sizeof(charArray) / sizeof(charArray[0]);

	std::cout << "Testing with char array: ";
	iter(charArray, charArrayLength, printElement<char>);
	std::cout << std::endl;
	std::cout << "Testing with toupper(): ";
	iter(charArray, charArrayLength, myToUpper);
	std::cout << std::endl;

	return 0;
}


