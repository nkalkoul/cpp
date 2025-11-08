/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:46:33 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:35:46 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal(){
	this->type = "WrongCat";
	std::cout
		<< "WRONGCATTT basic constructor called" << std::endl;
}

WrongCat::~WrongCat( void ){
	std::cout
		<< "WRONGCATTT basic destructor called" << std::endl;
	
}

WrongCat::WrongCat( const std::string t) : WrongAnimal(t){
	std::cout
		<< "WRONGCATTT type constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &a) : WrongAnimal(a){
	std::cout
		<< "WRONGCATTT copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &a){
	if (this != &a)
		this->WrongAnimal::operator=(a);
	std::cout
		<< "WRONGCATTT operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound( void ) const{
	std::cout
		<< "grooooooooaaaaaar" << std::endl;
}