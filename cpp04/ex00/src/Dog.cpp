/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:34:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal(){
	this->type = "Dog";
	std::cout
		<< "Dog basic constructor called" << std::endl;
}

Dog::~Dog( void ){
	std::cout
		<< "Dog basic destructor called" << std::endl;
	
}

Dog::Dog( const std::string t) : Animal(t){
	std::cout
		<< "Dog type constructor called" << std::endl;
}

Dog::Dog( const Dog &a) : Animal(a){
	std::cout
		<< "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &a){
	if (this != &a)
		this->Animal::operator=(a);
	std::cout
		<< "Dog operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout
		<< "ouaaaaafffffffff" << std::endl;
}