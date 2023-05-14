/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:41:36 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/14 19:36:05 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	Harl		harl;
	MemFnPtr	ptr;

	if (level == "DEBUG")
		ptr = &Harl::debug;
	else if (level == "INFO")
		ptr = &Harl::info;
	else if (level == "WARNING")
		ptr = &Harl::warning;
	else if (level == "ERROR")
		ptr = &Harl::error;
	(harl.*ptr)();
	return ;
}
