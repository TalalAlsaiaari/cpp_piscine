/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:54:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 15:25:14 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

	if (arg[arg.length() - 1] == 'f'
		&& arg.find_last_not_of(nums + ".", arg.length() - 2) == std::string::npos
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}

bool ScalarConverter::isDouble(std::string arg)
{
	size_t dotPos = arg.find_first_of(".");
	std::string nums = "1234567890";

	if (arg.find_first_not_of(nums + ".") == std::string::npos
		&& arg.find_last_of(".") == dotPos)
		return true;
	return false;
}

bool ScalarConverter::isSpecialFloat(std::string arg)
{
	if (!arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf"))
		return true;
	return false;
}

bool ScalarConverter::isSpecialDouble(std::string arg)
{
	if (!arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("nan"))
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

	arg[arg.length() - 1] = 0;
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
	float f = -1;
	int flag = -1;

	if (!arg.compare("-inff") || !arg.compare("+inff"))
	{ 
		f = std::numeric_limits<float>::infinity();
		if (!arg.compare("-inff"))
			flag = 1;
		else if (!arg.compare("+inff"))
			flag = 2;
	}
	else if (!arg.compare("nanf"))
	{
		f = std::numeric_limits<float>::quiet_NaN();
		flag = 3;
	}
	specialFloatToAll(f, flag);
}

void ScalarConverter::convertToSpecialDouble(std::string arg)
{
	double d = -1;
	int flag = -1;

	if (!arg.compare("-inf") || !arg.compare("+inf"))
	{ 
		d = std::numeric_limits<double>::infinity();
		if (!arg.compare("-inf"))
			flag = 4;
		else if (!arg.compare("+inf"))
			flag = 5;
	}
	else if (!arg.compare("nan"))
	{
		d = std::numeric_limits<double>::quiet_NaN();
		flag = 6;
	}
	specialDoubleToAll(d, flag);
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
	if (n < -128 || n > 255)
		displayChar(static_cast <char> (-1));
	else
		displayChar(static_cast <char> (n));
	displayInt(n);
	displayFloat(static_cast <float> (n));
	displayDouble(static_cast <double> (n));
}

void ScalarConverter::floatToAll(float f)
{
	if (f < -128 || f > 255)
		displayChar(static_cast <char> (-1));
	else
		displayChar(static_cast <char> (f));
	displayInt(static_cast <int> (f));
	displayFloat((f));
	displayDouble(static_cast <double> (f));
}

void ScalarConverter::doubleToAll(double d)
{
	if (d < -128 || d > 255)
		displayChar(static_cast <char> (-1));
	else
		displayChar(static_cast <char> (d));
	displayInt(static_cast <int> (d));
	displayFloat(static_cast <float> (d));
	displayDouble(d);
}

void ScalarConverter::specialFloatToAll(float f, int flag)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	displaySpecialFloat(f, flag);
	displaySpecialDouble(static_cast <double> (f), flag);
}

void ScalarConverter::specialDoubleToAll(double d, int flag)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	displaySpecialFloat(static_cast <float> (d), flag);
	displaySpecialDouble(d, flag);
}

void ScalarConverter::displayChar(char c)
{
	if (c >= 33 && c <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
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
	if (f == 0 || (f / (int)f) == (int)1)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void ScalarConverter::displayDouble(double d)
{
	if (d == 0 || (d / (int)d) == (int)1)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void ScalarConverter::displaySpecialFloat(float f, int flag)
{
	if (flag == 1 || flag == 4)
		std::cout << "float: " << '-' << f << 'f' << std::endl;
	else if (flag == 2 || flag == 5)
		std::cout << "float: " << '+' << f << 'f' << std::endl;
	else if (flag == 3 || flag == 6)
		std::cout << "float: " << f << 'f' << std::endl;
}

void ScalarConverter::displaySpecialDouble(double d, int flag)
{
	if (flag == 1 || flag == 4)
		std::cout << "double: " << '-' << d << std::endl;
	else if (flag == 2 || flag == 5)
		std::cout << "double: " << '+' << d << std::endl;
	else if (flag == 3 || flag == 6)
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
	else if (isSpecialFloat(arg))
		convertToSpecialFloat(arg);
	else if (isSpecialDouble(arg))
		convertToSpecialDouble(arg);
	else
		displayError();
}