/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:52:23 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/06/23 00:25:18 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	// const Animal* meta = new Animal(); // this will cause a compiling error, since animal is now an abstract class containing pure virtual func;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal* a = new Cat();
	Animal* b = new Cat();
	const WrongAnimal* k = new WrongCat();
	const Cat king;
	Cat queen(king);
	
	*a = *b;	
	a->makeSound();
	b->makeSound();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	k->makeSound();
	// delete meta;
	delete j;
	delete i;
	delete k;
	delete a;
	delete b;
	return 0;
}