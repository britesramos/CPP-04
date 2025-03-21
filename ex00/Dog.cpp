/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:38:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 14:03:25 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog Default Constructor called." << std::endl;
	_type = "Dog";
}

Dog::Dog(std::string type): Animal(type){
	std::cout << "Dog Constructor called." << std::endl;
}

Dog::Dog(const Dog& other): Animal(other){
	std::cout << "Dog Copy Constructor called." << std::endl;
}

Dog&::Dog::operator=(const Dog& other){
	std::cout << "Dog Copy Assignment operator called." << std::endl;
	if (this != &other){
		Animal::operator=(other);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Auf Auf" << std::endl;
}