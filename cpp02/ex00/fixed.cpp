/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:23:59 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 16:56:18 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed( const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed( void ): _Rawbits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f){
		this->_Rawbits = f.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;	
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_Rawbits);
}

void Fixed::setRawBits( int const raw ){
	this->_Rawbits = raw;
	std::cout << "getRawBits member function called" << std::endl;
}
