/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/17 16:08:39 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/21 15:16:25 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default Constructor called." << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Brain Copy Constructor called." << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Brain Copy Assignment Operator called." << std::endl;
	if (this != &other){
		for(int i = 0; i < 100; ++i){
			this->ideas[i] = other.ideas[i];
		}
	}
	return(*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor called." << std::endl;
}


void Brain::setIdeas(std::string newIdea, int i){
	this->ideas[i] = newIdea;
}

std::string Brain::getIdeas(int i){
	return(this->ideas[i]);
}