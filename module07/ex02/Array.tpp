/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:41:27 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/01 16:06:03 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

static int z;

template <typename T> Array<T>::Array()
{
	this->s = 1;
	this->a = new T[this->s];
	this->a[0] = 0;
	z++;
	std::cout << "Template " << z << " constructor called" << std::endl;
	return ;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	this->s = n;
 	a = new T[n];
	for (unsigned int i = 0; i < n; i++)
		a[i] = T();
	z++;
	std::cout << "Template " << z << " parameterized constructor called" << std::endl;
	return ;
}

template <typename T> Array<T>::Array(const Array<T> &cp)
{
	this->s = cp.s;
	this->a = new T[s];
	*this->a = *(cp.a);
	for (unsigned int i = 0; i < this->s; i++)
		a[i] = cp.a[i];
	z++;
	std::cout << "Template " << z << " copy constructor called" << std::endl;
	return ;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &op)
{
	if (this == &op)
		return *this;
	this->s = op.s;
	delete this->a;
	this->a = new T[this->s];
	*this->a = *(op.a);
	z++;
	std::cout << "Template " << z << " assignment operator called" << std::endl;
	return *this;
	
}

template <typename T> Array<T>::~Array()
{
	std::cout << "Template " << z << " destructor called" << std::endl;
	delete [] a;
	return ;
}

// Subscript operator for non-const access
template <typename T> T& Array<T>::operator[](unsigned int index) 
{
	if (index >= this->s || index < 0)
	    throw IndexOutOfBounds();
	return this->a[index];
}

// Subscript operator for const access
template <typename T> const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= this->s || index < 0)
	    throw IndexOutOfBounds();
	return this->a[index];
}

// Member function size() that returns the number of elements in the array.
template <typename T> unsigned int Array<T>::size()
{
    return this->s;
}

template <typename T> const char*	Array<T>::IndexOutOfBounds::what() const throw()
{
	return ("Index out of bounds!");
}