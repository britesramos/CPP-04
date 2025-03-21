/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:34:07 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 14:03:28 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat Default Constructor called." << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string type): Animal(type){
	std::cout << "Cat Constructor called." << std::endl;
}

Cat::Cat(const Cat& other): Animal(other){
	std::cout << "Cat Copy Constructor called." << std::endl;
}

Cat&::Cat::operator=(const Cat& other){
	std::cout << "Cat Copy Assignment operator called." << std::endl;
	if (this != &other){
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat Destructor called." << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Miau Miau" << std::endl;
}