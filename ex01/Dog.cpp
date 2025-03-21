/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:38:46 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 15:19:17 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog Default Constructor called." << std::endl;
	_type = "Dog";
	this->_dogBrain = new Brain();
}

Dog::Dog(std::string type): Animal(type){
	std::cout << "Dog Constructor called." << std::endl;
	this->_dogBrain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other){
	std::cout << "Dog Copy Constructor called." << std::endl;
	this->_dogBrain = new Brain(* other._dogBrain);
}

Dog&::Dog::operator=(const Dog& other){
	std::cout << "Dog Copy Assignment operator called." << std::endl;
	if (this != &other){
		Animal::operator=(other);
		delete this->_dogBrain;
		this->_dogBrain = new Brain(* other._dogBrain);
	}
	return (*this);
}

Dog::~Dog(){
	delete (this->_dogBrain);
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Auf Auf" << std::endl;
}