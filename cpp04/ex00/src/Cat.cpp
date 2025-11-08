/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:33:59 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal(){
	this->type = "Cat";
	std::cout
		<< "Cat basic constructor called" << std::endl;
}

Cat::~Cat( void ){
	std::cout
		<< "Cat basic destructor called" << std::endl;
	
}

Cat::Cat( const std::string t) : Animal(t){
	std::cout
		<< "Cat type constructor called" << std::endl;
}

Cat::Cat( const Cat &a) : Animal(a){
	std::cout
		<< "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &a){
	if (this != &a)
		this->Animal::operator=(a);
	std::cout
		<< "Cat operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout
		<< "grooooooooaaaaaar" << std::endl;
}