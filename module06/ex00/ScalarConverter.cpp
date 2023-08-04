/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:54:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/03 14:29:26 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	;
}

bool ScalarConverter::isChar(std::string arg)
{	
	std::string nums = "1234567890";
	if (arg.length() == 1 && arg.find_first_of(nums) == std::string::npos)
		return true;
	return false;
}

bool ScalarConverter::isInt(std::string arg)
{	
	std::string nums = "1234567890";
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
	std::string nums = "1234567890";
	
	if (arg[arg.length()] == 'f'
		&& arg.find_last_not_of(nums + ".", arg.length() - 1) == std::string::npos
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}

bool ScalarConverter::isDouble(std::string arg)
{
	size_t dotPos = arg.find_first_of(".");
	std::string nums = "1234567890";

	if (arg.find_first_not_of(nums + ".")
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}

bool ScalarConverter::isSpecial(std::string arg)
{
	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf")
		|| !arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("nan"))
		return true;
	return false;
}

void ScalarConverter::convertToChar(std::string arg)
{
	std::stringstream conv;
	char c;

	conv << arg;
	conv >> c;
	charToAll(c);
}

void ScalarConverter::convertToInt(std::string arg)
{
	std::stringstream conv;
	long n;

	conv << arg;
	conv >> n;
	intToAll(n);
}

void ScalarConverter::convertToFloat(std::string arg)
{
	std::stringstream conv;
	float f;

	conv << arg;
	conv >> f;
	floatToAll(f);
}

void ScalarConverter::convertToDouble(std::string arg)
{
	std::stringstream conv;
	double d;

	conv << arg;
	conv >> d;
	doubleToAll(d);
}

void ScalarConverter::convertToSpecialFloat(std::string arg)
{
	float f;

	if (!arg.compare("-inff") || !arg.compare("+inff")) 
		f = std::numeric_limits<float>::infinity();
	if (!arg.compare("nanf"))
		f = std::numeric_limits<float>::quiet_NaN();
	specialFloatToAll(f);
}

void ScalarConverter::convertToSpecialDouble(std::string arg)
{
	std::stringstream conv;
	double d;

	if (!arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("nan"))
	{
		conv << arg;
		if (!(conv >> d))
			std::cout << "Error" << std::endl;
		specialDoubleToAll(d);
	}
}

void ScalarConverter::charToAll(char c)
{
	displayChar(c);
	displayInt(static_cast <int> (c));
	displayFloat(static_cast <float> (c));
	displayDouble(static_cast <double> (c));
}

void ScalarConverter::intToAll(long n)
{
	displayChar(static_cast <char> (n));
	displayInt(n);
	displayFloat(static_cast <float> (n));
	displayDouble(static_cast <double> (n));
}

void ScalarConverter::floatToAll(float f)
{
	displayChar(static_cast <char> (f));
	displayInt(static_cast <int> (f));
	displayFloat((f));
	displayDouble(static_cast <double> (f));
}

void ScalarConverter::doubleToAll(double d)
{
	displayChar(static_cast <char> (d));
	displayInt(static_cast <int> (d));
	displayFloat(static_cast <float> (d));
	displayDouble(d);
}

void ScalarConverter::specialFloatToAll(float f)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	displaySpecialFloat((f));
	displaySpecialDouble(static_cast <double> (f));
}

void ScalarConverter::specialDoubleToAll(double d)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	displaySpecialFloat(static_cast <float> (d));
	displaySpecialDouble(d);
}

void ScalarConverter::displayChar(char c)
{
	if (c >= 33 && c <= 126)
		std::cout << "char: '" << c  << "'" << std::endl;
	else if ((c >= 0 && c < 33) || c == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::displayInt(long n)
{
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast <int> (n) << std::endl;
}

void ScalarConverter::displayFloat(float f)
{
	// std::cout << FLT_MIN << std::endl;
	// std::cout << f << std::endl;
	// std::cout << typeid(f).name() << std::endl;
	// if (f < FLT_MIN || f > FLT_MAX)
	// 	std::cout << "float: impossible" << std::endl;
	// else
	std::cout << "float: " << f << ".0f" << std::endl;
}

void ScalarConverter::displayDouble(double d)
{
	// if (d < DBL_MIN || d > DBL_MAX)
	// 	std::cout << "double: impossible" << std::endl;
	// else
	std::cout << "double: " << d << ".0" << std::endl;
}

void ScalarConverter::displaySpecialFloat(float f)
{
	std::cout << "float: " << f << std::endl;
}

void ScalarConverter::displaySpecialDouble(double d)
{
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::displayError(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(std::string arg)
{
	if (isChar(arg))
		convertToChar(arg);
	else if (isInt(arg))
		convertToInt(arg);
	else if (isFloat(arg))
		convertToFloat(arg);
	else if (isDouble(arg))
		convertToDouble(arg);
	else if (isSpecial(arg))
	{
		convertToSpecialFloat(arg);
		convertToSpecialDouble(arg);
	}
	else
		displayError();
}