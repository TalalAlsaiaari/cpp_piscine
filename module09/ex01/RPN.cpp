/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:24:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/04 15:29:42 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValid(std::string arg)
{
	if (arg.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

void reversePolishNotation(char *arg)
{
	std::stack<int, std::list<int>> stack;
	//check arg for invalid characters
	if (!isValid(arg))
	{
		std::cout << "Error: Invalid character found\n";
		return ;
	}
	//push and check numbers until reach operator
	//apply the operator and push result
	//repeat until end of stack
}