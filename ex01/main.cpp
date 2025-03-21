/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:31:00 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 15:24:55 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n-------------Additional tests [1]:-------------\n" << std::endl;

	Animal* array[10];
	for(int i = 0; i < 10; ++i){
		std::cout << i + 1 << "). ";
		if (i < 5){
			array[i] = new Dog();
		}

		else{
			array[i] = new Cat();
		}

	}

	std::cout << "\n";

	for (int j = 0; j < 10; ++j){
		std::cout << j + 1 << "). ";
		delete array[j];
	}


	std::cout << "\n-------------Additional tests [2]:-------------\n" << std::endl;

	Cat gato1("Gato");
	Cat gato2("Perro");

	gato1.setCatBrain("Hola mi nombre es gato!", 1);
	std::cout << "\nGATO[1]: " << gato1.getCatBrain(1) << "\n" << std::endl;

	gato2 = gato1;
	std::cout << "\nGATO[2]: " << gato2.getCatBrain(1) << "\n" << std::endl;
	
	gato2.setCatBrain("He cambiado de nombre! Ahora soy Romeu!", 1);

	std::cout << "\nGATO[1]: " << gato1.getCatBrain(1) << "\n" << std::endl;
	std::cout << "\nGATO[2]: " << gato2.getCatBrain(1) << "\n" << std::endl;

	return 0;
}