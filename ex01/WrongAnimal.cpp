/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 13:50:44 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:37:26 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default Constructor called." << std::endl; 
}

WrongAnimal::WrongAnimal(std::string type): _wrongtype(type){
	std::cout << "WrongAnimal Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal Copy Constructor called." << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	std::cout << "WrongAnimal Copy Assignament operator called." << std::endl;
	if (this != &other){
		this->_wrongtype = other._wrongtype;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const{
	return(this->_wrongtype);
}
