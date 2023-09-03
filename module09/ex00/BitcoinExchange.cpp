/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:47:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/03 18:49:10 by talsaiaa         ###   ########.fr       */
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

bool checkLine(std::string line, t_input *input)
{
	std::istringstream is(line);
	std::string date;
	char delimiter;
	float value;

	if (is >> date >> delimiter >> value)
	{
		if (delimiter == '|')
		{
			input->date = date;
			input->value = value;
			return true;
		}
	}
	input->date = "";
	input->value = -1;
	std::cout << "Error: bad format => " << line << std::endl;
	return false;
}

bool checkDate(std::string date)
{
    std::istringstream is(date);
    char delimiter;
    struct tm t;
    time_t when;
    const struct tm *norm;
	int y,m,d;

    memset(&t, 0, sizeof(t));
    if (!date.empty() && is >> y >> delimiter >> m >> delimiter >> d)
    {
        t.tm_mday = d;
        t.tm_mon = m - 1;
        t.tm_year = y - 1900;
        t.tm_isdst = -1;
        when = mktime(&t);
        norm = localtime(&when);
        if (norm->tm_mday == d
			&& norm->tm_mon  == m - 1
			&& norm->tm_year == y - 1900)
		return true;
    }
    std::cout << "Error: bad date => " << date << std::endl;
    return false;
}

void bitcoinExchanger(std::fstream& inputFile)
{
	std::string line;
	t_input input;

	std::getline(inputFile, line); //to skip first line, but have to check if first line is not just title
	for(;std::getline(inputFile, line);)
	{
		//funtion to check and parse line?
		if (checkLine(line, &input) && checkDate(input.date))
			;
		//function to check and extract date
		// checkDate(input.date);
		//funtion to check and extract value
		// checkValue(input.value);
		//funtion to get the result?
		//funtion to print
	}
}