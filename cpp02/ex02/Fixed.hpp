/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:36:25 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/10 13:36:20 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed {

private :

	int _RawBits;
	static const int	_FractionalBits = 8;

public :

	Fixed( void );
	Fixed( const int n);
	Fixed( const float n);
	Fixed( const Fixed &f);
	~Fixed();
	
	Fixed	&operator=( const Fixed &f );
	bool	operator>( const Fixed &f ) const;
	bool	operator>=( const Fixed &f ) const;
	bool	operator<( const Fixed &f ) const;
	bool	operator<=( const Fixed &f ) const;
	bool	operator==( const Fixed &f ) const;
	bool	operator!=( const Fixed &f ) const;
	
	Fixed	operator+( const Fixed &f );
    Fixed	operator-( const Fixed &f );
    Fixed	operator/( const Fixed &f );
    Fixed	operator*( const Fixed &f );
    Fixed	&operator++( void ); //pre
    Fixed	operator++( int ); //post
    Fixed	&operator--( void );
    Fixed	operator--( int );
	
	float	toFloat( void ) const;
	int 	toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	static			Fixed min( Fixed &a, Fixed &b );
	static	const	Fixed min( const Fixed &a, const Fixed& b );
	static			Fixed max( Fixed& a, Fixed& b );
	static const	Fixed max( const Fixed& a, const Fixed& b );
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);
