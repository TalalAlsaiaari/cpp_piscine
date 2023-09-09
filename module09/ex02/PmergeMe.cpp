/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/09 17:28:33 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValid(std::string& args)
{
	if (args.find_first_not_of("0123456789 ") == std::string::npos)
		return true;
	return false;
}

std::vector<std::pair<unsigned int, unsigned int> >
	pairingNumbers(std::string& args)
{
	std::stringstream ss(args);
	std::string token;
	std::stringstream conv;
	std::pair<unsigned int, unsigned int> pair;
	std::vector<std::pair<unsigned int, unsigned int> > myVector;

	for (size_t i = 1; ss >> token; i++)
	{
		conv << token;
		if (i % 2 != 0)
			conv >> pair.first;
		else
		{
			conv >> pair.second;
			// have to check for odd number args
			myVector.push_back(pair);
		}
		conv.clear();
	}
	return (myVector);
}

void sortPairs(std::vector<std::pair<unsigned int, unsigned int> > &vector)
{
	unsigned int temp;
	std::vector<std::pair<unsigned int, unsigned int> >::iterator it;

	for (it = vector.begin(); it != vector.end(); it++)
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

void merge(std::vector<std::pair<unsigned int, unsigned int> > &vector,
	size_t begin,
	size_t mid,
	size_t end)
{
	std::vector<std::pair<unsigned int, unsigned int> > left;
	std::vector<std::pair<unsigned int, unsigned int> > right;
	
	for (size_t i = 0; i < (mid - begin + 1); i++)
		left.push_back(vector[begin + i]);
	for (size_t i = 0; i < (end - mid); i++)
		right.push_back(vector[mid + 1 + i]);
	size_t left_i = 0, right_i = 0, vector_i = begin;
	while (left_i < left.size() && right_i < right.size())
	{
		if (left[left_i].first <= right[right_i].first)
		{
			vector[vector_i] = left[left_i];
			left_i++;
		}
		else
		{
			vector[vector_i] = right[right_i];
			right_i++;
		}
		vector_i++;
	}
	while (left_i < left.size())
	{
		vector[vector_i] = left[left_i];
		left_i++;
		vector_i++;
	}
	while (right_i < right.size())
	{
		vector[vector_i] = right[right_i];
		right_i++;
		vector_i++;
	}
}

void sortFirstNumbers(std::vector<std::pair<unsigned int, unsigned int> > &vector, size_t begin, size_t end)
{
	if (begin >= end)
		return ;
	size_t mid = begin + (end - begin) / 2;
	sortFirstNumbers(vector, begin, mid);
	sortFirstNumbers(vector, mid + 1, end);
	merge(vector, begin, mid, end);
}

void searchAndInsert(std::vector<std::pair<unsigned int, unsigned int> > &vector)
{
	size_t l = 0;
	size_t r = vector.size() - 1;
	std::vector<int> sortedVector;
	
	while (l <= r)
	{
		size_t m = l + (r - 1) / 2;
		if (vector[m].second = vector[0].second)
			vector.insert(vector.begin(), vector[m].second);
	}
}

void usingVector(std::string& args)
{
	// function to pair and return paired vector
	std::vector<std::pair<unsigned int, unsigned int> >
		unsortedVector = pairingNumbers(args);
	std::cout << "Unsorted pairs:\n";
	for (size_t i = 0; i < unsortedVector.size(); i++)
		std::cout << unsortedVector[i].first << " " << unsortedVector[i].second << " | ";
	std::cout << std::endl;
	// function to sort pairs (bigger should be first)
	sortPairs(unsortedVector);
	std::cout << "Sorted pairs:\n";
	for (size_t i = 0; i < unsortedVector.size(); i++)
		std::cout << unsortedVector[i].first << " " << unsortedVector[i].second << " | ";
	std::cout << std::endl;
	// function to recursivly sort bigger first number pairs
	sortFirstNumbers(unsortedVector, 0, unsortedVector.size() - 1);
	std::cout << "Sorted first numbers:\n";
	for (size_t i = 0; i < unsortedVector.size(); i++)
		std::cout << unsortedVector[i].first << " " << unsortedVector[i].second << " | ";
	std::cout << std::endl;
	// function to binary search and insert to main chain
	searchAndInsert(unsortedVector);
	// function to print?
	return ;
}

void usingDeque(std::string& args)
{
	(void)args;
	return ;
}

void mergeInsertion(std::string& args)
{
	if (!isValid(args))
	{
		std::cout << "Error: Only postive numbers are allowed\n";
		return ;
	}
	std::cout << "Before: " << args << std::endl;
	usingVector(args);
	usingDeque(args);
	return ;
}