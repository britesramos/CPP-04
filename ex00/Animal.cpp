/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:35:49 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:35:15 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal"){
	std::cout << "Animal Default Constructor called." << std::endl;
}

Animal::Animal(std::string type): _type(type){
	std::cout << "Animal Constructor called." << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Animal Copy Constructor called." << std::endl;
	*this = other;
}

Animal&::Animal::operator=(const Animal& other){
	if (this != &other){
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor called." << std::endl;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
	return(_type);
}