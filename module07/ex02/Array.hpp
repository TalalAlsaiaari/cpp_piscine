/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:30:30 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/01 15:50:20 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
	private:
		T *a;
		unsigned int	s;
	
	public:
		unsigned int	size();
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		class IndexOutOfBounds : public std::exception
		{
			public:
				const char * what() const throw();
		};

		Array();
		Array(unsigned int);
		Array(const Array<T>&);
		Array<T>& operator=(const Array<T>&);
		~Array();
};

#include "Array.tpp"