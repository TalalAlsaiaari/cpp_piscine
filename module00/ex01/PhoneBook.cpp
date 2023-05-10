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
	ContactNum = 0;
	MaxNum = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{
	std::cout << "\nKindly input the information of the contact one field at a time: " << std::endl;
	std::cout << std::endl;
	while (contacts[ContactNum].getFirstName().empty())
	{
		std::cout << "\tFirst Name: ";
		contacts[ContactNum].setFirstName();
		if (contacts[ContactNum].getFirstName().empty())
			std::cout << "\t\tCannot be empty!\n";
	}
	while (contacts[ContactNum].getLastName().empty())
	{
		std::cout << "\tLast Name: ";
		contacts[ContactNum].setLastName();
		if (contacts[ContactNum].getLastName().empty())
			std::cout << "\t\tCannot be empty!\n";
	}
	while (contacts[ContactNum].getNickname().empty())
	{
		std::cout << "\tNickname: ";
		contacts[ContactNum].setNickname();
		if (contacts[ContactNum].getNickname().empty())
			std::cout << "\t\tCannot be empty!\n";
	}
	while (contacts[ContactNum].getPhoneNumber().empty())
	{
		std::cout << "\tPhone Number: ";
		contacts[ContactNum].setPhoneNumber();
		if (contacts[ContactNum].getPhoneNumber().empty())
			std::cout << "\t\tCannot be empty!\n";
	}
	while (contacts[ContactNum].getDarkestSecret().empty())
	{
		std::cout << "\tDarkest Secret: ";
		contacts[ContactNum].setDarkestSecret();
		if (contacts[ContactNum].getDarkestSecret().empty())
			std::cout << "\t\tCannot be empty!\n";
	}
	std::cout << std::endl;
	std::cout << "Information of " << contacts[ContactNum].getFirstName() << " is now saved under index " << ContactNum + 1 << std::endl;
	std::cout << std::endl;
	ContactNum++;
	if (ContactNum == 8)
		ContactNum = 0;
	if (ContactNum < MaxNum)
		MaxNum = 8;
	else
		MaxNum = ContactNum;
	return ;
}

void	PhoneBook::searchContact(void)
{
	int	i = 0;
	
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "index" << "|" 
	<< std::setw(10) << "first name" << "|" 
	<< std::setw(10) << "last name" << "|" 
	<< std::setw(10) << "nickname"  
	<< std::endl;
	do
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|" 
		<< std::setw(10) << contacts[i].getFirstName() << "|"  
		<< std::setw(10) << contacts[i].getLastName() << "|" 
		<< std::setw(10) << contacts[i].getNickname() 
		<< std::endl;
		i++;
	} while (i < MaxNum);
	std::cout << std::endl;
	return ;
}
