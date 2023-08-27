/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:47:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/27 18:14:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* if parsing of the database file is needed, the following has to be checked:
	1. file extension must be .csv
	2. check if file exists
	3. check if file can be opened
	4. parse the line to be in the format of date,rate exactly (no spaces and comma in the middle)
	5. check if conversion is possible for each rate */

const std::map<std::string, float> fileToMap(void)
{
	std::fstream dbFile("data.csv", std::ios::in);
	std::map<std::string, float> database;
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
	return database;
}