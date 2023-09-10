/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/10 16:28:28 by talsaiaa         ###   ########.fr       */
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
	pairingNumbers(std::string& args, bool &flag, unsigned int &oddArg)
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
		{
			conv >> pair.first;
			flag = true;
			oddArg = pair.first;
		}
		else
		{
			conv >> pair.second;
			myVector.push_back(pair);
			flag = false;
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
	size_t begin, size_t mid, size_t end)
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
	return ;
}

void sortFirstNumbers(std::vector<std::pair<unsigned int, unsigned int> > &vector, size_t begin, size_t end)
{
	if (begin >= end)
		return ;
	size_t mid = begin + (end - begin) / 2;
	sortFirstNumbers(vector, begin, mid);
	sortFirstNumbers(vector, mid + 1, end);
	merge(vector, begin, mid, end);
	return ;
}

int search(std::vector<unsigned int> &vector, int l, int r, unsigned int second)
{	
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (mid != 0 && vector[mid - 1] <= second && vector[mid] >= second)
			return mid;
		if (vector[mid] > second)
			return search(vector, l, mid - 1, second);
		return search(vector, mid + 1, r, second);
	}
	return 0;
}

void searchAndInsert(std::vector<std::pair<unsigned int, unsigned int> > &pairedVector, bool &flag, unsigned int &oddArg)
{
	std::vector<unsigned int> unpairedVector;
	std::vector<unsigned int>::iterator it;
	int pos;

	if (!flag)
		(void)oddArg;
	for (size_t i = 0; i < pairedVector.size(); i++)
		unpairedVector.push_back(pairedVector[i].first);
	it = unpairedVector.begin();
	for (size_t i = 0; i < pairedVector.size(); i++)
	{
		pos = search(unpairedVector, 0 , unpairedVector.size() - 1, pairedVector[i].second);
		unpairedVector.insert(it + pos, pairedVector[i].second);
		it = unpairedVector.begin();
	}
	if (flag)
	{
		pos = search(unpairedVector, 0, unpairedVector.size() - 1, oddArg);
		if (pos == 0 && oddArg > unpairedVector[unpairedVector.size() - 1])
			unpairedVector.insert(it + unpairedVector.size(), oddArg);
		else
			unpairedVector.insert(it + pos, oddArg);
	}
	std::cout << "After:";
	for (size_t i = 0; i < unpairedVector.size(); i++)
		std::cout << " " << unpairedVector[i];
	std::cout << std::endl;
	return ;
}

void usingVector(std::string& args)
{
	bool flag = false; //0 for even, 1 for odd;
	unsigned int oddArg;
	
	// function to pair and return paired vector
	std::vector<std::pair<unsigned int, unsigned int> >
		pairedVector = pairingNumbers(args, flag, oddArg);
	// function to sort pairs (bigger should be first)
	sortPairs(pairedVector);
	// function to recursivly sort bigger first number pairs
	sortFirstNumbers(pairedVector, 0, pairedVector.size() - 1);
	// function to binary search and insert to main chain
	searchAndInsert(pairedVector, flag, oddArg);
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
	if (args.size() == 1)
	{
		std::cout << "After: " << args << std::endl;
		return ;
	}
	usingVector(args);
	usingDeque(args);
	return ;
}