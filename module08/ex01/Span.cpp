/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:34:41 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/04 16:59:06 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->maxSize = 1;
	this->currentAmount = 0;
	this->min = INT_MIN;
	this->max = INT_MAX;
	cont.resize(this->maxSize);
}

Span::Span(unsigned int N)
{
	this->maxSize = N;
	this->currentAmount = 0;
	this->min = INT_MIN;
}