/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:34:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 20:53:31 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(2);

	try
	{
		sp.addNumber(INT_MAX);
		sp.addNumber(INT_MIN);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		// sp.addNumber(34);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp2 = Span(50);
	try
	{
		sp2.fillSpan(50);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}