/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:10:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/10 15:05:08 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
	private:
	

	public:
		MutantStack(void);
		MutantStack(const MutantStack<T>&);
		const MutantStack<T>& operator(const MutantStack<T>&);
		~MutantStack(void);
};

#include "MutantStack.tpp"