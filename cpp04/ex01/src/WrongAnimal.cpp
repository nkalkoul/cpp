/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:07:09 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:37:06 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	std::cout
		<< "WRONG ANIMAAL basic constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout
		<< "WRONG ANIMAAL basic destructor called" << std::endl;
	
}

WrongAnimal::WrongAnimal( const std::string t) : type(t){
	std::cout
		<< "WRONG ANIMAAL type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &a){
	std::cout
		<< "WRONG ANIMAAL copy constructor called" << std::endl;
	*this = a;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &a){
		std::cout
		<< "Animal operator =() called" << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const{
	std::cout
		<< "##########VROUUUUM#########" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}