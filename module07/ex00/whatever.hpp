/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:30:50 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/07/31 15:54:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> T myMin(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T> T myMax(T x, T y)
{
	return (x > y ? x : y);
}

template <typename T> void mySwap(T &x, T &y)
{
	T	temp = x;

	x = y;
	y = temp;
	return ;
}