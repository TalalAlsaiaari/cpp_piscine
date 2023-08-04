/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:47:51 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/04 16:59:00 by talsaiaa         ###   ########.fr       */
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
		int	min;
		int max;
		std::vector<int> cont;

	public:
		void addNumber(int);
		int shortestSpan(void);
		int longestSpan(void);
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