/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:36:25 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 09:19:40 by nassuto          ###   ########.fr       */
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
	Fixed &operator=(const Fixed &f);
	~Fixed();
	
	float toFloat( void ) const;
	int toInt( void ) const;
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);
