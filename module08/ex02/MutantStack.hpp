/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:10:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/11 13:09:55 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
		
		MutantStack(void){}
		// MutantStack(const MutantStack<T>&){};
		// const MutantStack<T>& operator=(const MutantStack<T>&){return this};
		~MutantStack(void){}
};

#include "MutantStack.tpp"