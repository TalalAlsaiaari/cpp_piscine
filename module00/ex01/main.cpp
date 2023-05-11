/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:51:14 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/11 10:08:10 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buff;
	int			err;

	std::cout << "\nWelcome to your Phonebook!\n" << std::endl;
	while (true)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			return (1);
		if (buff != "ADD" && buff != "SEARCH" && buff != "EXIT")
			std::cout << "\nInvalid command! Please use ADD, SEARCH or EXIT to quit.\n" << std::endl;
		if (buff == "ADD")
		{
			err = phonebook.addContact();
			if (err == -1)
				break ;
		}
		else if (buff == "SEARCH")
		{
			err = phonebook.searchContact();
			if (err == -1)
				break ;
		}
		else if (buff == "EXIT")
		{
			std::cout << "Say goodbye to all of your contacts :)" << std::endl;
			break ;
		}
	}
	return 0;
}
