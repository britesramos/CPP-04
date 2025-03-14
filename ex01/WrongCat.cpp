/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 15:11:25 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:38:38 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat Default Constructor called." << std::endl;
	_wrongtype = "WrongCat";
}

WrongCat::WrongCat(std::string type): WrongAnimal(type){
	std::cout << "WrongCat Constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other){
	std::cout << "WrongCat Copy Constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	if (this != &other){
		this->_wrongtype = other._wrongtype;
	}
	return(*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called." << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Wrong Miau Miau" << std::endl;
}