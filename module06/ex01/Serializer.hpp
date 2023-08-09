/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:33:59 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/09 15:26:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer&);
		Serializer& operator=(const Serializer&);
		~Serializer();

	public:
		static uintptr_t serialize(Data*);
		static Data* deserialize(uintptr_t);
};