/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:19:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/14 17:14:37 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplace.hpp"

int main(int ac, char **av)
{
	StringReplace	replace;
	
	replace.checkArgs(ac, av);
	replace.openFiles(av);
	replace.stringReplace();
	replace.closeFiles();
	return 0;
}
