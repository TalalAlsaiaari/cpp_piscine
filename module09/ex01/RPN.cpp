/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:24:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/04 13:53:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValid(std::string arg)
{
	if (arg.find_first_not_of("0123456789+-/* ") == npos)
		return true;
	return false;
}

void reversePolishNotation(char *arg)
{
	//check arg for invalid characters
	isValid(arg);
	//push and check numbers until reach operator
	//apply the operator and push result
	//repeat until end of stack
}