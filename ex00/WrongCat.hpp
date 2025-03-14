/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/14 13:48:25 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/14 18:40:09 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#pragma once

class WrongCat: public WrongAnimal{

	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();
		
		void makeSound() const;
};
