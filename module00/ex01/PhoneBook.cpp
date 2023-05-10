/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:46:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/10 15:21:43 by talsaiaa         ###   ########.fr       */
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
	// ContactNum = 0;
	std::cout << "Kindly input the information of the contact one field at a time: " << std::endl;
	// this should be in a loop
	std::cout << "First Name: ";
	contacts[ContactNum].setFirstName();
	std::cout << std::endl;
	std::cout << "Last Name: ";
	contacts[ContactNum].setLastName();
	std::cout << std::endl;
	std::cout << "Nickname: ";
	contacts[ContactNum].setNickname();
	std::cout << std::endl;
	std::cout << "Phone number: ";
	contacts[ContactNum].setPhoneNumber();
	std::cout << std::endl;
	std::cout << "Darkest secret: ";
	contacts[ContactNum].setDarkestSecret();
	std::cout << std::endl;
	ContactNum++;
	if (ContactNum == 8)
		ContactNum = 0;
	return ;
}

void	PhoneBook::searchContact(void)
{
	std::cout << std::right << std::setw(10) << "index" << "|" 
	<< std::setw(10) << "first name" << "|" 
	<< std::setw(10) << "last name" << "|" 
	<< std::setw(10) << "nickname" << "|" 
	<< std::endl;
	// this should be in a loop
	for (int i = 0; i < ContactNum; i++)
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|" 
		<< std::setw(10) << contacts[i].getFirstName() << "|"  
		<< std::setw(10) << contacts[i].getLastName() << "|" 
		<< std::setw(10) << contacts[i].getNickname() << "|" 
		<< std::endl;
	}
	return ;
}
