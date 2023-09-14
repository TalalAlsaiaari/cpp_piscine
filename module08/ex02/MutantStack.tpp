/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:47:24 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/09/14 12:19:39 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack(void)
{
	;
}
template <typename T> MutantStack<T>::MutantStack(const MutantStack<T>& copy)
{
	*this = copy;
	return ;
}
template <typename T> const MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& copy)
{
	if (this == &copy)
		return *this;
	return *this;
}
template <typename T> MutantStack<T>::~MutantStack(void)
{
	;
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}