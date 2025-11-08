/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/27 03:47:38 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat( void ) : Animal(){
	this->type = "Cat";
	std::cout
		<< "Cat basic constructor called" << std::endl;
	br = new Brain();
}

Cat::~Cat( void ){
	std::cout
		<< "Cat basic destructor called" << std::endl;
	delete br;
}

Cat::Cat( const std::string t) : Animal(t){
	std::cout
		<< "Cat type constructor called" << std::endl;
	br = new Brain();
}

Cat::Cat( const Cat &a) : Animal(a), br(NULL){
	std::cout
		<< "Cat copy constructor called" << std::endl;
	*this = a;
}

Cat &Cat::operator=( const Cat &a){
	std::cout
	<< "Cat operator called" << std::endl;
	if (this != &a){
		if (br)
		delete br;
		this->br = new Brain(*a.br);
		this->Animal::operator=(a);
	}
	return (*this);
}

void	Cat::makeSound( void ) const{
	std::cout
		<< "grooooooooaaaaaar" << std::endl;
}

void Cat::setid(const std::string id){
	br->setid(id);
}

void Cat::lookid( void ){
	br->lookid();
}
