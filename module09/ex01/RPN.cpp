/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:24:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/07 19:08:43 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValid(std::string& arg)
{
	if (arg.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

bool isnegativenum(std::string& token)
{
	if (token[0] == '-' && token.size() > 1 && isdigit(token[1]))
		return true;
	return false;
}

bool applyOperator(std::string& token, std::stack<int, std::list<int> > *stack)
{
	int	lhs;
	int rhs;
	
	if (stack->size() < 2)
	{
		std::cout << "Error: Invalid Expression\n";
		return false;
	}
	rhs = stack->top();
	stack->pop();
	lhs = stack->top();
	stack->pop();
	if (token == "+")
		stack->push(lhs + rhs);
	else if (token == "-")
		stack->push(lhs - rhs);
	else if (token == "*")
		stack->push(lhs * rhs);
	else if (token == "/")
	{
		if (rhs == 0)
		{
			std::cout << "Error: Division by zero\n";
			return false;
		}
		stack->push(lhs / rhs);
	}
	return true;
}

bool push_and_check(std::string& arg, std::stack<int, std::list<int> > *stack)
{
	std::stringstream ss(arg);
	std::string token;
	bool ret = true;
	
	while (ss >> token)
	{
		if (isdigit(token[0]) || isnegativenum(token))
		{
			if (atoi(token.c_str()) > 10)
			{
				std::cout << "Error: numbers must be less than 10\n";
				return false;
			}
			stack->push (atoi(token.c_str()));
		}
		else if (token == "+" || token == "-" || token == "*" || token == "/")
			ret = applyOperator(token, stack);
	}
	return ret;
}

void reversePolishNotation(std::string arg)
{
	std::stack<int, std::list<int> > stack;
	
	if (!isValid(arg))
	{
		std::cout << "Error: Invalid character found\n";
		return ;
	}
	if (!push_and_check(arg, &stack))
		return ;
	if (stack.size() == 1)
		std::cout << stack.top() << std::endl;
	else
		std::cout << "Error: Invalid expression\n";
	return ;
}