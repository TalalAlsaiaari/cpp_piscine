/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:47:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/27 17:58:08 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	fileToMap();
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	*this = copy;
	return ;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy)
{
	if (this == &copy)
		return *this;
	this->database = copy.database;
	return *this;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}


/* if parsing of the database file is needed, the following has to be checked:
	1. file extension must be .csv
	2. check if file exists
	3. check if file can be opened
	4. parse the line to be in the format of date,rate exactly (no spaces and comma in the middle)
	5. check if conversion is possible for each rate */

void BitcoinExchange::fileToMap(void)
{
	std::fstream dbFile("data.csv", std::ios::in);
	std::stringstream conv;
	std::string line;
	std::string date;
	float rate;

	std::getline(dbFile, line);
	for (;std::getline(dbFile, line);)
	{
		date = line.substr(0, line.find(','));
		conv << line.substr(line.find(',') + 1);
		conv >> rate;
		database[date] = rate;
		conv.clear();
	}
}