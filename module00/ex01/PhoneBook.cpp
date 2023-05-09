/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:46:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/03/16 20:42:47 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
	return ;
}

void	PhoneBook::addContact(void)
{
	ContactNum = 0;
	std::cout << "Kindly input the information of the contact one field at a time: " << std::endl;
	std::cout << "First Name: ";
	contacts[ContactNum].setFirstName();
	std::cout << std::endl;
	ContactNum++;
	return ;
}

void	PhoneBook::searchContact(void)
{
	// int	i = 1;
	std::cout << "index	|	first name	|	last name	|	nickname" << std::endl;
	return ;
}
