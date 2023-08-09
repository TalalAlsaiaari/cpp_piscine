/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:07:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 15:24:18 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <climits>
#include <cfloat>
#include <typeinfo>
#include <limits>
#include <assert.h>

class ScalarConverter
{
	private:		
		static bool isChar(std::string);
		static bool isInt(std::string);
		static bool isFloat(std::string);
		static bool isDouble(std::string);
		static bool isSpecialFloat(std::string);
		static bool isSpecialDouble(std::string);
		static void convertToChar(std::string);
		static void convertToInt(std::string);
		static void convertToFloat(std::string);
		static void convertToDouble(std::string);
		static void convertToSpecialFloat(std::string);
		static void convertToSpecialDouble(std::string);
		static void charToAll(char);
		static void intToAll(long);
		static void floatToAll(float);
		static void doubleToAll(double);
		static void specialFloatToAll(float, int);
		static void specialDoubleToAll(double, int);
		static void displayChar(char);
		static void displayInt(long);
		static void displayFloat(float);
		static void displayDouble(double);
		static void displaySpecialFloat(float, int);
		static void displaySpecialDouble(double, int);
		static void displayError(void);

		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter();

	public:
		static void convert(std::string);
};