/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:54:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 14:06:50 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data*> (raw));
}