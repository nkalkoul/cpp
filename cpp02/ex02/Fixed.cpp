/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:23:59 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 16:35:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( const Fixed &f) {
	*this = f;
}

Fixed::Fixed( void ) : _RawBits(0){
}

Fixed &Fixed::operator=(const Fixed &f){
	if (this != &f){
		this->_RawBits = f._RawBits;
	}
	return (*this);
}

Fixed::~Fixed( void ){
}

int	Fixed::getRawBits( void ) const{
	return (this->_RawBits);
}

void Fixed::setRawBits( int const raw ){
	this->_RawBits = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value){
	out << value.toFloat();
	return out;
}

Fixed::Fixed( const int n){
	this->_RawBits = n * (1 << this->_FractionalBits);
}

Fixed::Fixed( const float n){
	this->_RawBits = roundf(n * (1 << this->_FractionalBits));
}

float Fixed::toFloat( void ) const{
	return ((float)this->_RawBits / (1 << _FractionalBits));
}

int Fixed::toInt( void ) const{
	return (this->_RawBits / (1 << _FractionalBits));
}

bool Fixed::operator<(const Fixed &f)const {
	return (this->_RawBits < f._RawBits);
}

bool Fixed::operator>(const Fixed &f)const {
	return (this->_RawBits > f._RawBits);
}

bool Fixed::operator<=(const Fixed &f)const {
	return (this->_RawBits <= f._RawBits);
}

bool Fixed::operator>=(const Fixed &f)const {
	return (this->_RawBits >= f._RawBits);
}


bool Fixed::operator!=(const Fixed &f)const {
	return (this->_RawBits != f._RawBits);
}

bool Fixed::operator==(const Fixed &f)const {
	return (this->_RawBits == f._RawBits);
}

Fixed Fixed::operator+(const Fixed &f){
	return (this->_RawBits + f._RawBits);
}

Fixed Fixed::operator-(const Fixed &f){
	return (this->_RawBits - f._RawBits);
}

Fixed Fixed::operator/(const Fixed &f){
	return (this->_RawBits / f._RawBits);
}

Fixed Fixed::operator*(const Fixed &f){
	return (this->_RawBits * f._RawBits);
}

Fixed &Fixed::operator++( void ){
	this->_RawBits++;
	return (*this);
}

Fixed Fixed::operator++( int ){
	Fixed dest = this->_RawBits;
	this->_RawBits++;
	return (dest);
}

Fixed &Fixed::operator--( void ){
	this->_RawBits--;
	return (*this);
}

Fixed Fixed::operator--( int ){
	this->_RawBits--;
	return (*this);
}

const Fixed Fixed:: min( const Fixed &a, const Fixed &b ){
	if ( a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::min( Fixed &a, Fixed &b ){
	if ( a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}


const Fixed Fixed::max( const Fixed& a, const Fixed& b ){
	if ( a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::max( Fixed& a, Fixed& b ){
	if ( a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
