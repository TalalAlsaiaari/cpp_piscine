/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/14 14:54:52 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValid(std::string& args)
{
	if (args.find_first_not_of("0123456789 ") == std::string::npos)
		return true;
	return false;
}

template <typename Paired> Paired
	pairingNumbers(std::string& args, bool &flag, unsigned int &oddArg, Paired &myContainer)
{
	std::stringstream ss(args);
	std::string token;
	std::stringstream conv;
	std::pair<unsigned int, unsigned int> pair;

	for (size_t i = 1; ss >> token; i++)
	{
		conv << token;
		if (i % 2 != 0)
		{
			conv >> pair.first;
			flag = true;
			oddArg = pair.first;
		}
		else
		{
			conv >> pair.second;
			myContainer.push_back(pair);
			flag = false;
		}
		conv.clear();
	}
	return (myContainer);
}

template <typename Paired> void sortPairs(Paired &myContainer)
{
	unsigned int temp;
	typename Paired::iterator it;

	for (it = myContainer.begin(); it != myContainer.end(); it++)
	{
		if (it->first < it->second)
		{
			temp = it->first;
			it->first = it->second;
			it->second = temp;
		}
	}
	return ;
}

template <typename Paired> void
	merge(Paired &myContainer, size_t begin, size_t mid, size_t end)
{
	Paired left;
	Paired right;
	size_t left_i = 0;
	size_t right_i = 0; 
	size_t myContainer_i = begin;
	
	for (size_t i = 0; i < (mid - begin + 1); i++)
		left.push_back(myContainer[begin + i]);
	for (size_t i = 0; i < (end - mid); i++)
		right.push_back(myContainer[mid + 1 + i]);
	while (left_i < left.size() && right_i < right.size())
	{
		if (left[left_i].first <= right[right_i].first)
		{
			myContainer[myContainer_i] = left[left_i];
			left_i++;
		}
		else
		{
			myContainer[myContainer_i] = right[right_i];
			right_i++;
		}
		myContainer_i++;
	}
	while (left_i < left.size())
	{
		myContainer[myContainer_i] = left[left_i];
		left_i++;
		myContainer_i++;
	}
	while (right_i < right.size())
	{
		myContainer[myContainer_i] = right[right_i];
		right_i++;
		myContainer_i++;
	}
	return ;
}

template <typename Paired> void
	sortFirstNumbers(Paired &myContainer, size_t begin, size_t end)
{
	size_t mid;

	if (begin >= end)
		return ;
	mid = begin + (end - begin) / 2;
	sortFirstNumbers(myContainer, begin, mid);
	sortFirstNumbers(myContainer, mid + 1, end);
	merge(myContainer, begin, mid, end);
	return ;
}

template <typename Unpaired> int
	search(Unpaired &myContainer, int l, int r, unsigned int second)
{	
	int mid;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		if (mid != 0 && myContainer[mid - 1] <= second && myContainer[mid] >= second)
			return mid;
		if (myContainer[mid] > second)
			return search(myContainer, l, mid - 1, second);
		return search(myContainer, mid + 1, r, second);
	}
	return 0;
}

template <typename Paired, typename Unpaired> void
	searchAndInsert(Paired &pairedContainer, bool &flag, unsigned int &oddArg, Unpaired &unpairedContainer)
{
	typename Unpaired::iterator it;
	int pos;

	if (!flag)
		(void)oddArg;
	for (size_t i = 0; i < pairedContainer.size(); i++)
		unpairedContainer.push_back(pairedContainer[i].first);
	it = unpairedContainer.begin();
	for (size_t i = 0; i < pairedContainer.size(); i++)
	{
		pos = search(unpairedContainer, 0 , unpairedContainer.size() - 1, pairedContainer[i].second);
		unpairedContainer.insert(it + pos, pairedContainer[i].second);
		it = unpairedContainer.begin();
	}
	if (flag)
	{
		pos = search(unpairedContainer, 0, unpairedContainer.size() - 1, oddArg);
		if (pos == 0 && oddArg > unpairedContainer[unpairedContainer.size() - 1])
			unpairedContainer.insert(it + unpairedContainer.size(), oddArg);
		else
			unpairedContainer.insert(it + pos, oddArg);
	}
	return ;
}

template <typename Unpaired> void
	printContainer(Unpaired &unpairedContainer)
{
	std::cout << "After:";
	for (size_t i = 0; i < unpairedContainer.size(); i++)
		std::cout << " " << unpairedContainer[i];
	std::cout << std::endl;
}

void usingVector(std::string& args, std::vector<unsigned int> &unpairedVector)
{
	bool flag = false; //0 for even, 1 for odd;
	unsigned int oddArg;
	std::vector<std::pair<unsigned int, unsigned int> > pairedVector;
	// std::vector<unsigned int> unpairedVector;
	
	// function to pair and return paired vector
	pairingNumbers(args, flag, oddArg, pairedVector);
	// function to sort pairs (bigger should be first)
	sortPairs(pairedVector);
	// function to recursivly sort bigger first number pairs
	sortFirstNumbers(pairedVector, 0, pairedVector.size() - 1);
	// function to binary search and insert to main chain
	searchAndInsert(pairedVector, flag, oddArg, unpairedVector);
	return ;
}

void usingDeque(std::string& args, std::deque<unsigned int> &unpairedDeque)
{
	bool flag = false; //0 for even, 1 for odd;
	unsigned int oddArg;
	std::deque<std::pair<unsigned int, unsigned int> > pairedDeque;
	// std::deque<unsigned int> unpairedDeque;
	
	// function to pair and return paired vector
	pairingNumbers(args, flag, oddArg, pairedDeque);
	// function to sort pairs (bigger should be first)
	sortPairs(pairedDeque);
	// function to recursivly sort bigger first number pairs
	sortFirstNumbers(pairedDeque, 0, pairedDeque.size() - 1);
	// function to binary search and insert to main chain
	searchAndInsert(pairedDeque, flag, oddArg, unpairedDeque);
	// function to print
	printContainer(unpairedDeque);
	return ;
}

void printTime(std::clock_t begin, std::clock_t &end, std::string containerType, size_t size)
{
	double time_elapsed = 1000.0 * (end - begin) / CLOCKS_PER_SEC;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\nTime to process a range of " << size << " elements with " << containerType << " : ";
	std::cout << time_elapsed << " ms" << std::endl;
	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void mergeInsertion(std::string& args)
{
	std::clock_t handlingArgs_begin = std::clock();
	if (!isValid(args))
	{
		std::cout << "Error: Only postive numbers are allowed\n";
		return ;
	}
	std::clock_t handlingArgs_end = std::clock();
	std::clock_t time_handlingArgs = handlingArgs_end - handlingArgs_begin;
	std::cout << "Before: " << args << std::endl;
	if (args.size() == 1)
	{
		std::cout << "After: " << args << std::endl;
		return ;
	}
	std::vector<unsigned int> unpairedVector;
	std::clock_t vectorBegin = std::clock();
	usingVector(args, unpairedVector);
	std::clock_t vectorEnd = std::clock();
	std::deque<unsigned int> unpairedDeque;
	std::clock_t dequeBegin = std::clock();
	usingDeque(args, unpairedDeque);
	std::clock_t dequeEnd = std::clock();
	printTime((vectorBegin + time_handlingArgs), vectorEnd, "std::vector", unpairedVector.size());
	printTime((dequeBegin + time_handlingArgs), dequeEnd, "std::deque", unpairedDeque.size());
	return ;
}