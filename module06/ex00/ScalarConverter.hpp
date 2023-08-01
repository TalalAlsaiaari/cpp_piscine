/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:07:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/01 19:07:45 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>

class ScalarConverter
{
	private:
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