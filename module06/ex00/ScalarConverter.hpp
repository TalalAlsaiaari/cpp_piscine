/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:07:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/03 13:21:42 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <typeinfo>

class ScalarConverter
{
	private:
		ScalarConverter();
		static bool isChar(std::string);
		static bool isInt(std::string);
		static bool isFloat(std::string);
		static bool isDouble(std::string);
		static void convertToChar(std::string);
		static void convertToInt(std::string);
		static void convertToFloat(std::string);
		static void convertToDouble(std::string);
		static void charToAll(char);
		static void intToAll(long);
		static void floatToAll(float);
		static void doubleToAll(double);
		static void displayChar(char);
		static void displayInt(long);
		static void displayFloat(float);
		static void displayDouble(double);

	public:
		static void convert(std::string);
};