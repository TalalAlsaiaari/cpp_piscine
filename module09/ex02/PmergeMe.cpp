/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:25:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/09 11:06:45 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValid(std::string& args)
{
	if (args.find_first_not_of("0123456789 ") == std::string::npos)
		return true;
	return false;
}

std::vector<std::pair<unsigned int, unsigned int> > pairingNumbers(std::string& args)
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
	for (size_t i = 0; i < myVector.size(); i++)
		std::cout << myVector[i].first << " " << myVector[i].second << std::endl;
	return (myVector);
}

void usingVector(std::string& args)
{
	// function to pair and return paired vector
	pairingNumbers(args);
	// function to sort pairs (bigger should be first)
	// function to recursivly sort bigger first number pairs
	// function to binary search and insert to main chain
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