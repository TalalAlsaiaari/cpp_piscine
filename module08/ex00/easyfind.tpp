/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:04:17 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/04 14:08:27 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "easyfind.hpp"

template <typename T> void easyfind(T cont, int n)
{
	if (std::binary_search(cont.begin(), cont.end(), n))
		std::cout << "Found " << n << std::endl;
	else
		throw NotFoundException();
	return ;
}

const char *NotFoundException::what() const throw()
{
	return ("Not Found");
}