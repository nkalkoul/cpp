/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:23:59 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 09:36:42 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( const Fixed &f) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed( void ) : _RawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f){
		this->_RawBits = f._RawBits;
	}
	return (*this);
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;	
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void Fixed::setRawBits( int const raw ){
	this->_RawBits = raw;
	std::cout << "getRawBits member function called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
	out << value.toFloat();
	return out;
}

Fixed::Fixed( const int n){
	this->_RawBits = n * (1 << this->_FractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n){
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(n * (1 << this->_FractionalBits));
}

float Fixed::toFloat( void ) const{
	return ((float)this->_RawBits / (1 << _FractionalBits));
}

int Fixed::toInt( void ) const{
	return (this->_RawBits / (1 << _FractionalBits));
}
