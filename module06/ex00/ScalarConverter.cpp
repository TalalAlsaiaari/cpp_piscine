/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:54:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/02 10:42:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	nums = "1234567890";
}

bool ScalarConverter::isChar(std::string arg)
{	
	if (arg.length() == 1 && arg.find_first_of(nums) == std::string::npos)
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string arg)
{	
	if (arg.find_first_not_of(nums) == std::string::npos)
		return true;
	if (arg[0] == '-' && arg.find_first_not_of(nums, 1) == std::string::npos)
		return true;
	if (arg[0] == '+' && arg.find_first_not_of(nums, 1) == std::string::npos)
		return true;
	return false;
}

bool ScalarConverter::isFloat(std::string arg)
{
	size_t dotPos = arg.find_first_of(".");
	
	if (arg[arg.length()] == 'f'
		&& arg.find_last_not_of(nums + ".", arg.length() - 1) == std::string::npos
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}

bool ScalarConverter::isDouble(std::string arg)
{
	size_t dotPos = arg.find_first_of(".");

	if (arg.find_first_not_of(nums + ".")
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}