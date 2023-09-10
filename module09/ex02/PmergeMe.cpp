/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/10 14:56:07 by talsaiaa         ###   ########.fr       */
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
	pairingNumbers(std::string& args, int &flag)
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
			flag = -2;
		}
		else
		{
			conv >> pair.second;
			// have to check for odd number args
			myVector.push_back(pair);
			flag = -1;
		}
		if (ss >> token && flag == -2)
		{
			std::cout << "end of args\n";
			flag = pair.first;
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
	while (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (vector[mid] != vector.at(0) && vector[mid - 1] < second && vector[mid] >= second)
			return mid;
		if (vector[mid] < second)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return 0;
}

void searchAndInsert(std::vector<std::pair<unsigned int, unsigned int> > &vector)
{
	std::vector<unsigned int> sortedVector;
	std::vector<unsigned int>::iterator it;
	int pos;

	for (size_t i = 0; i < vector.size(); i++)
		sortedVector.push_back(vector[i].first);
	it = sortedVector.begin();
	for (size_t i = 0; i < vector.size(); i++)
	{
		pos = search(sortedVector, 0 , sortedVector.size() - 1, vector[i].second);
		sortedVector.insert(it + pos, vector[i].second);
		it = sortedVector.begin();
	}
	std::cout << "After:";
	for (size_t i = 0; i < sortedVector.size(); i++)
		std::cout << " " << sortedVector[i];
	std::cout << std::endl;
	return ;
}

void usingVector(std::string& args)
{
	int flag = -1; //0 for even, 1 for odd;
	
	// function to pair and return paired vector
	std::vector<std::pair<unsigned int, unsigned int> >
		unsortedVector = pairingNumbers(args, flag);
	std::cout << "flag: " << flag << std::endl;
	// function to sort pairs (bigger should be first)
	sortPairs(unsortedVector);
	// function to recursivly sort bigger first number pairs
	sortFirstNumbers(unsortedVector, 0, unsortedVector.size() - 1);
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
	if (args.size() == 1)
	{
		std::cout << "After: " << args << std::endl;
		return ;
	}
	usingVector(args);
	usingDeque(args);
	return ;
}