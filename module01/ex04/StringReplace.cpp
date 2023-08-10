/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplace.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:16:46 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/10 15:20:24 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplace.hpp"

StringReplace::StringReplace()
{
	_counter = 0;
	_pos = 0;
	return ;
}

StringReplace::~StringReplace()
{
	return ;
}

void	StringReplace::checkArgs(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		exit(1);
	}
	if (!av[2][0])
	{
		std::cout << "Invalid input!" << std::endl;
		exit(2);
	}
	return ;
}

void	StringReplace::openFiles(char **args)
{
	_fileName = args[1];
	std::string replaced = _fileName + ".replace";
	_s1 = args[2];
	_s2 = args[3];
	_infile.open(args[1], std::ifstream::in);
	if (!_infile.good())
	{
		std::cout << "Invalid input file!" << std::endl;
		exit(3) ;
	}
	_outfile.open(replaced.c_str(), std::ifstream::out);
	if (!_outfile.good())
	{
		std::cout << "Outfile could not be created!" << std::endl;
		exit(4) ;
	}
	return ;
}

void	StringReplace::stringReplace(void)
{
	while (std::getline(_infile, _line))
	{
		_pos = _line.find(_s1);
		if (_pos == std::string::npos)
			_outfile << _line;
		else
		{
			while((_pos = _line.find(_s1, _pos)) != std::string::npos)
			{
				_line.erase(_pos, _s1.length());
				_line.insert(_pos, _s2);
				_pos++;
			}
			_outfile << _line;
			_counter++;
		}
		if (!_infile.eof())
			_outfile << std::endl;
	}
	std::cout << _counter << " occurrence/s of '" << _s1 << "' replaced in " << _fileName << std::endl;
	return ;
}

void	StringReplace::closeFiles(void)
{
	_infile.close();
	_outfile.close();
	return ;
}
