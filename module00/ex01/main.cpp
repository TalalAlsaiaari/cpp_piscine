/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:51:14 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/03/16 20:46:44 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buff;

	while (true)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			return (1);
		if (buff == "ADD")
		{
			std::cout << "Add func" << std::endl;
			phonebook.addContact();
		}
		else if (buff == "SEARCH")
		{
			std::cout << "search func" << std::endl;
			phonebook.searchContact();
		}
		else if (buff == "EXIT")
			break ;
	}
	
	return 0;
}
