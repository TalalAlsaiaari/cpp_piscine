/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:24:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/05 19:54:02 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValid(std::string arg)
{
	if (arg.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

void push_and_check(std::string arg, std::stack<int, std::list<int> > *stack)
{
	std::stringstream conv;
	size_t pos = arg.find_first_of("+-/*");
	int numbers[2];
	const char *delim = " ";
	char *tok = std::strtok(const_cast<char*> (arg.c_str()), delim);

	// if (pos == std::string::npos)
	// 	do something;
	for (size_t i = 0; tok && i < pos - 2; i++)
	{
		conv << tok;
		tok = std::strtok(NULL, delim);
		if (!(conv >> numbers[i]))
		{
			std::cout << "Error\n";
			return ;
		}
		conv.clear();
		stack->push(numbers[i]);
	}
	for (int i = 0; i < 2; i++)
		std::cout << numbers[i] << " ";
	return ;
}

void reversePolishNotation(char *arg)
{
	std::stack<int, std::list<int> > stack;
	
	//check arg for invalid characters
	if (!isValid(arg))
	{
		std::cout << "Error: Invalid character found\n";
		return ;
	}
	//push and check numbers until reach operator
	push_and_check(arg, &stack);
	//apply the operator and push result
	//repeat until end of stack
}