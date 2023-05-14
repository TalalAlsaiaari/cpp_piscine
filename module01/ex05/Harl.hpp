/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:36:22 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/14 19:28:24 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		_StoI(std::string) const;

	public:
		void	complain(std::string level);
		
		Harl();
		~Harl();
};

typedef void	(Harl::*MemFnPtr)(void);

#endif