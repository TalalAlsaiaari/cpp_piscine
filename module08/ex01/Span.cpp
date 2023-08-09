/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:34:41 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 19:31:53 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->maxSize = 1;
	this->currentAmount = 0;
}

Span::Span(unsigned int N)
{
	this->maxSize = N;
	this->currentAmount = 0;
}

Span::~Span()
{
	;
}

const char*	Span::NoSpaceLeftException::what() const throw()
{
	return "No space left in container";
}

const char* Span::NoSpanCanBeFoundException::what() const throw()
{
	return "No span can be found";
}

void Span::addNumber(int n)
{
	if (this->currentAmount == this->maxSize)
		throw NoSpaceLeftException();
	cont.push_back(n);
	this->currentAmount++;
}

int	Span::longestSpan(void)
{
	int min;
	int max;
	int res;
	
	if (this->currentAmount <= 1)
		throw NoSpanCanBeFoundException();
	std::sort(cont.begin(), cont.end());
	min = cont.at(0);
	max = cont.at(this->maxSize - 1);
	res = max - min;
	if (res < 0)
		res *= -1;
	return (res);
}

int Span::shortestSpan(void)
{
	int first;
	int second;
	int res;
	int span = INT_MAX;

	if (this->currentAmount <= 1)
		throw NoSpanCanBeFoundException();
	std::sort(cont.begin(), cont.end());
	for(unsigned int i = 0; i < this->maxSize - 1; i++)
	{
		first = cont.at(i);
		second = cont.at(i + 1);
		res = second - first;
		if (res < span)
			span = res;
	}
	if (span < 0)
		span *= -1;
	return (span);
}

void Span::fillSpan(unsigned int count)
{
	if (count > this->maxSize)
		throw NoSpaceLeftException();
	int *nums = new int[count];
	this->currentAmount = count;
	for (unsigned int i = 0; i < count; i++)
	{
		nums[i] = i;
	}
	cont.assign(nums, nums + count);
	delete []nums;
}