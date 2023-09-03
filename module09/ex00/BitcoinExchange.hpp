/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:32:43 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/03 20:28:57 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <ctime>
#include <cstring>

typedef struct	s_input
{
	std::string date;
	float value;
} t_input;

class FailToOpenFileException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

void bitcoinExchanger(std::fstream& inputFile);
