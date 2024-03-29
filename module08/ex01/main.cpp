/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:34:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/14 12:10:31 by talsaiaa         ###   ########.fr       */
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
	std::vector<int> src(50, 42);
	try
	{
		sp2.fillSpan(src);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp3(sp);
	sp3.printContainer();
	
	Span sp4;
	sp4 = sp3;
	sp4.printContainer();
	return 0;
}