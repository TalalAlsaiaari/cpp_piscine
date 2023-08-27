/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:47:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/27 19:35:33 by talsaiaa         ###   ########.fr       */
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

	std::getline(dbFile, line); //to skip first line
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

void bitcoinExchanger(std::fstream& inputFile)
{
	std::string line;

	std::getline(inputFile, line); //to skip first line, but have to check if first line is not just title
	for(;std::getline(inputFile, line);)
	{
		//funtion to check and parse line?
		//function to check and extract date
		//funtion to check and extract value
		//funtion to get the result?
		//funtion to print
	}
}