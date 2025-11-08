/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:33:21 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal( void ){
	std::cout
		<< "Animal basic constructor called" << std::endl;
}

Animal::~Animal( void ){
	std::cout
		<< "Animal basic destructor called" << std::endl;
	
}

Animal::Animal( const std::string t) : type(t){
	std::cout
		<< "Animal type constructor called" << std::endl;
}

Animal::Animal( const Animal &a){
	std::cout
		<< "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal &Animal::operator=( const Animal &a){
	std::cout
		<< "Animal operator =() called" << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	Animal::makeSound( void ) const{
	std::cout
		<< "no sound" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->type);
}