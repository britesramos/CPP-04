/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:34:07 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 15:26:38 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Cat Default Constructor called." << std::endl;
	_type = "Cat";
	this->_catBrain = new Brain();
}

Cat::Cat(std::string type): Animal(type){
	std::cout << "Cat Constructor called." << std::endl;
	this->_catBrain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other){
	std::cout << "Cat Copy Constructor called." << std::endl;
	this->_type = other._type;
	this->_catBrain = new Brain(*other._catBrain);
}

Cat&::Cat::operator=(const Cat& other){
	std::cout << "Cat Copy Assignment operator called." << std::endl;
	if (this != &other){
		Animal::operator=(other);
		this->_type = other._type;
		// this->_catBrain = other._catBrain; /*This leads to a double free. This is a shallow copy.*/
		delete this->_catBrain;
		this->_catBrain = new Brain(*other._catBrain);
	}
	return (*this);
}

Cat::~Cat(){
	delete (this->_catBrain);
	std::cout << "Cat Destructor called." << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Miau Miau" << std::endl;
}

std::string Cat::getCatBrain(int i){ 
	return (this->_catBrain->getIdeas(i));
}

void::Cat::setCatBrain(std::string newIdea, int i){
	this->_catBrain->setIdeas(newIdea, i);
}