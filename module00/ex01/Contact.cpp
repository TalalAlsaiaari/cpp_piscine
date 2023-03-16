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
}

Contact::~Contact()
{
}

void	Contact::ph_add()
{
	std::cout << "First Name: \n";
	std::cin >> FirstName;
	std::cout << "Last Name: \n";
	std::cin >> LastName;
	std::cout << "Nickname: \n";
	std::cin >> Nickname;
	std::cout << "Phone Number: \n";
	std::cin >> PhoneNumber;
	std::cout << "Darkest Secret: \n";
	std::cin >> DarkestSecret;
}