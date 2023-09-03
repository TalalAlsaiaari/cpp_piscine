/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:47:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/03 20:44:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

const char* FailToOpenFileException::what(void) const throw()
{
	return "Error: Failed to open database file";
}

const std::map<std::string, float> fileToMap(void)
{
	std::fstream dbFile("data.csv", std::ios::in);
	std::string line;
	std::stringstream conv;
	std::map<std::string, float> database;
	std::string date;
	float rate;

	if (dbFile.fail())
		throw FailToOpenFileException();
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
	std::cout << "Error: bad format => " << line << std::endl;
	return false;
}

bool checkDate(std::string date)
{
    std::tm t;
    std::istringstream is(date);
	int y,m,d;
    char delimiter;
    std::time_t when;
    const std::tm *norm;

    memset(&t, 0, sizeof(t));
    if (is >> y >> delimiter >> m >> delimiter >> d)
    {
        t.tm_year = y - 1900;
        t.tm_mon = m - 1;
        t.tm_mday = d;
        t.tm_isdst = -1;
        when = std::mktime(&t);
        norm = std::localtime(&when);
        if (norm->tm_mday == d
			&& norm->tm_mon  == m - 1
			&& norm->tm_year == y - 1900)
		{
			std::cout << d << " " << m << " " << y << std::endl;
			return true;
		}
    }
    std::cout << "Error: bad date => " << date << std::endl;
    return false;
}

bool checkValue(float value)
{
	if (value < 0)
	{
		std::cout << "Error: not a positive number\n";
		return false;
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number\n";
		return false;
	}
	return true;
}

void getResult(t_input input, std::map<std::string, float> database)
{
	std::map<std::string, float>::iterator it = database.lower_bound(input.date);
	
	if (it->first != input.date)
	{
		if (it != database.begin())
			it--;
		else if (it == database.begin())
		{
			std::cout << "Error: date is too old\n";
			return ;
		}
	}
	std::cout << input.date << " => " << input.value  << " = " << input.value * it->second << std::endl;
	return ;
}

void bitcoinExchanger(std::fstream& inputFile)
{
	std::string line;
	t_input input;
	std::map<std::string, float> database;

	database = fileToMap();
	for(;std::getline(inputFile, line);)
	{
		if (line == "date | value")
			continue ;
		if (checkLine(line, &input) && checkDate(input.date) && checkValue(input.value))
			getResult(input, database);
	}
}