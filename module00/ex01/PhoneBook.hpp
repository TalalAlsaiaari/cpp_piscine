/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:44:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/10 15:21:50 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact 	contacts[8];
		int			ContactNum;
		int			MaxNum;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		int	addContact(void);
		int	searchContact(void);
};

#endif