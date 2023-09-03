/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:32:43 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/03 18:22:41 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cstring>

typedef struct	s_input
{
	std::string date;
	float value;
} t_input;

const std::map<std::string, float> fileToMap(void);
void bitcoinExchanger(std::fstream& inputFile);
