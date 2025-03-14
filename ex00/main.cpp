/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:31:00 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:39:44 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete(i);
	delete(j);
	delete(meta);

	std::cout << "\n*-------------------------------------------------*\n" << std::endl;

	const WrongAnimal* hola = new WrongAnimal();
	const WrongAnimal* a = new WrongCat();

	std::cout << a->getType() << std::endl;
	hola->makeSound();
	a->makeSound();

	delete(a);
	delete(hola);

	return 0;
}