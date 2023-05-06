/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 01:37:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/03/16 21:45:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact Construcor called" << std::endl;
	return ;
}

Contact::~Contact()
{
	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return this->FirstName;
}

std::string	Contact::getLastName(void) const
{
	return this->LastName;
}

std::string	Contact::getNickname(void) const
{
	return this->Nickname;
}

std::string	Contact::getPhoneNumber(void) const
{
	return this->PhoneNumber;
}

std::string	Contact::getDarkestSecret(void) const
{
	return this->DarkestSecret;
}

void	Contact::setFirstName(std::string s)
{
	this->FirstName = s;
	return ;
}

void	Contact::setLastName(std::string s)
{
	this->LastName = s;
	return ;
}

void	Contact::setNickname(std::string s)
{
	this->Nickname = s;
	return ;
}

void	Contact::setPhoneNumber(std::string s)
{
	this->PhoneNumber = s;
	return ;
}

void	Contact::setDarkestSecret(std::string s)
{
	this->DarkestSecret = s;
	return ;
}
