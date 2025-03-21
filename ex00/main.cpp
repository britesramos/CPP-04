/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:31:00 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 14:07:07 by sramos        ########   odam.nl         */
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

	const WrongAnimal* pet = new WrongAnimal();
	const WrongAnimal* cat = new WrongCat();

	std::cout << cat->getType() << std::endl;
	pet->makeSound();
	cat->makeSound();

	delete(cat);
	delete(pet);

	return 0;
}