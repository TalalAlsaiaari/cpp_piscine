/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:07:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/02 10:47:04 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <limits>

class ScalarConverter
{
	private:
		static std::string nums;
		static char c;
		static long int n;
		static float f;
		static double d;
		
		ScalarConverter();
		static bool isChar(std::string);
		static bool isInt(std::string);
		static bool isFloat(std::string);
		static bool isDouble(std::string);
		static void convertToChar(std::stringstream);
		static void convertToInt(std::stringstream);
		static void convertToFloat(std::stringstream);
		static void convertToDouble(std::stringstream);
		static void detectType(std::stringstream);

	public:
		static void convert(std::string);
};