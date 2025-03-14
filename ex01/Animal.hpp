/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 10:24:32 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:35:07 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#pragma once

class Animal{

	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual ~Animal();

		virtual void makeSound() const;

		std::string getType() const;

};