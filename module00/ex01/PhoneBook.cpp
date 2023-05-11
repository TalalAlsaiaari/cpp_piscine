/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:46:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/11 14:31:57 by talsaiaa         ###   ########.fr       */
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
	do
	{
		std::cout << "\tFirst Name: ";
		contacts[ContactNum].setFirstName();
		if (contacts[ContactNum].getFirstName().empty())
			std::cout << "\t\tCannot be empty!\n";
	} while (contacts[ContactNum].getFirstName().empty());
	do
	{
		std::cout << "\tLast Name: ";
		contacts[ContactNum].setLastName();
		if (contacts[ContactNum].getLastName().empty())
			std::cout << "\t\tCannot be empty!\n";
	} while (contacts[ContactNum].getLastName().empty());
	do
	{
		std::cout << "\tNickname: ";
		contacts[ContactNum].setNickname();
		if (contacts[ContactNum].getNickname().empty())
			std::cout << "\t\tCannot be empty!\n";
	} while (contacts[ContactNum].getNickname().empty());
	do
	{
		std::cout << "\tPhone Number: ";
		contacts[ContactNum].setPhoneNumber();
		if (contacts[ContactNum].getPhoneNumber().empty())
			std::cout << "\t\tCannot be empty!\n";
	} while (contacts[ContactNum].getPhoneNumber().empty());
	do
	{
		std::cout << "\tDarkest Secret: ";
		contacts[ContactNum].setDarkestSecret();
		if (contacts[ContactNum].getDarkestSecret().empty())
			std::cout << "\t\tCannot be empty!\n";
	} while (contacts[ContactNum].getDarkestSecret().empty());
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
	// int index;
	std::string	index;
	
	if (MaxNum == 0)
	{
		std::cout << "\nNo contacts available to display!\n" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << std::right << std::setw(10) << "index" << "|" 
	<< std::setw(10) << "first name" << "|" 
	<< std::setw(10) << "last name" << "|" 
	<< std::setw(10) << "nickname"  
	<< std::endl;
	do
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		if (contacts[i].getFirstName().length() > 10)
			std::cout << std::right << std::setw(10)
			<< contacts[i].getFirstName().replace(9, std::string::npos, ".", 0, 1) << "|";
		else
			std::cout << std::right << std::setw(10) << contacts[i].getFirstName() << "|";
		if (contacts[i].getLastName().length() > 10)
			std::cout << std::right << std::setw(10)
			<< contacts[i].getLastName().replace(9, std::string::npos, ".", 0, 1) << "|";
		else
			std::cout << std::right << std::setw(10) << contacts[i].getLastName() << "|";
		if (contacts[i].getNickname().length() > 10)
			std::cout << std::right << std::setw(10)
			<< contacts[i].getNickname().replace(9, std::string::npos, ".", 0, 1);
		else
			std::cout << std::right << std::setw(10) << contacts[i].getNickname();
		std::cout << std::endl;
		i++;
	} while (i < MaxNum);
	std::cout << std::endl;
	do
	{
		std::cout << "Please enter the index of the contact to display: ";
		std::cin >> index;
		if (index.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "\nInvalid index. Only positive digits are allowed\n" << std::endl;
		else if (index[0] - '0' == 0 || index[0] - '0' > MaxNum || index.length() > 1)
			std::cout << "\nIndex is out of range. Only " << MaxNum << " contact/s is/are available!\n" << std::endl;
	} while (index.find_first_not_of("0123456789") != std::string::npos || (index[0] - '0' == 0 || index[0] - '0' > MaxNum) || index.length() > 1);
	std::cout << "\nFirst Name: " << contacts[index[0] - '0' - 1].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index[0] - '0' - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index[0] - '0' - 1].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index[0] - '0' - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index[0] - '0' - 1].getDarkestSecret() << std::endl;
	std::cout << std::endl;
	std::cin.ignore(1, '\n');
	return ;
}
