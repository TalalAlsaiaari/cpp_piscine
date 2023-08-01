/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:59:57 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/01 06:59:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename Func> void iter(T &arr, size_t size, Func func)
{
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T> void printElement(const T& element)
{
	std::cout << element << " ";
}