/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:47:51 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/14 12:02:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
	private:
		unsigned int maxSize;
		unsigned int currentAmount;
		std::vector<int> cont;

	public:
		void addNumber(int);
		long shortestSpan(void);
		long longestSpan(void);
		void fillSpan(std::vector<int>);
		void printContainer(void);
		class NoSpaceLeftException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NoSpanCanBeFoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		Span(void);
		Span(unsigned int);
		Span(const Span &);
		const Span& operator=(const Span &);
		~Span(void);
};