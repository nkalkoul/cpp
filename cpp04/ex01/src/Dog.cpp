/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/27 03:42:33 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog( void ) : Animal(){
	std::cout
		<< "Dog basic constructor called" << std::endl;
	this->type = "Dog";
	br = new Brain();
}

Dog::~Dog( void ){
	std::cout
		<< "Dog basic destructor called" << std::endl;
	delete br;
}

Dog::Dog( const std::string t) : Animal(t){
	std::cout
		<< "Dog type constructor called" << std::endl;
	br = new Brain();
}

Dog::Dog( const Dog &a) : Animal(a), br(NULL){
	std::cout
		<< "Dog copy constructor called" << std::endl;
	*this = a;
}

Dog &Dog::operator=( const Dog &a){
	std::cout
	<< "Dog operator surcharge = called" << std::endl;
	if (this != &a){
		if (br)
			delete br;
		this->br = new Brain(*a.br);
		this->type = a.type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const{
	std::cout
		<< "ouaaaaafffffffff" << std::endl;
}

void Dog::setid(const std::string id){
	br->setid(id);
}

void Dog::lookid( void ){
	br->lookid();
}