/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:07:12 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/14 17:11:57 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRINGREPLACE_HPP
# define STRINGREPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

class StringReplace
{
	private:
		std::string		_line;
		std::size_t		_pos;
		std::ifstream	_infile;
		std::ofstream	_outfile;
		std::string		_fileName;
		std::string		_s1;
		std::string		_s2;
		int				_counter;
	
	public:
		void	checkArgs(int, char**);
		void	openFiles(char**);
		void	stringReplace(void);
		void	closeFiles(void);

		StringReplace();
		~StringReplace();
};

#endif