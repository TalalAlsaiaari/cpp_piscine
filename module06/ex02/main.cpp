/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:54:54 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/08/10 15:51:31 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	int rnd;

	srand(time(0));
	rnd = rand() % 100;
	if ((rnd % 2) == 0)
		return (new A());
	else if ((rnd % 3) == 0)
		return (new B());
	else
		return (new C());
}

void identify(Base *p)
{
	A* a = dynamic_cast <A*>(p);
	B* b = dynamic_cast <B*>(p);
	C* c = dynamic_cast <C*>(p);

	std::cout << "Pointer" << std::endl;
	if (a)
		std::cout << "type is A" << std::endl;
	else if (b)
		std::cout << "type is B" << std::endl;
	else if (c)
		std::cout << "type is C" << std::endl;
}

void identify(Base &p)
{
	std::cout << "Reference" << std::endl;
	try{
		A a = dynamic_cast <A&> (p);
		std::cout << "type is A" << std::endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try{
		B b = dynamic_cast <B&> (p);
		std::cout << "type is B" << std::endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
	try{
		C c = dynamic_cast <C&> (p);
		std::cout << "type is C" << std::endl;
	}
	catch(std::exception &e)
	{
		(void)e;
	}
}

int main()
{
	Base* test;

	test = generate();
	identify(test);
	identify(*test);
	delete test;
	return 0;
}