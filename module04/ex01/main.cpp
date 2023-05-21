/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:52:23 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/05/18 18:33:17 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Dog basic;
    Dog tmp = basic;

    const Animal* animals[100];
    for ( int i = 0; i < 50; i++ ) {
        animals[i] = new Dog();
    }
	for (int i = 50 ; i < 100; i++){
		animals[i] = new Cat();
	}
    for ( int i = 0; i < 100; i++ ) {
        delete animals[i];
    }

    return 0;
}