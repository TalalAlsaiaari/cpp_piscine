/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:25:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/12 14:40:36 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string		str = "HI THIS IS BRAIN.";
	std::string*	strPTR = &str;
	std::string&	strREF = str;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address of the pointer to the string: " << &strPTR << std::endl;
	std::cout << "Adress of the reference to the string: " << &strREF << std::endl;
	std::cout << "Value of the string variable: " << str << std::endl;
	std::cout << "Value of the pointer to the string: " << strPTR << std::endl;
	std::cout << "Value of the reference to the string: " << strREF << std::endl;
	return 0;
}