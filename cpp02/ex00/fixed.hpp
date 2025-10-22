/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:36:25 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 16:46:33 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {

private :

	int _Rawbits;
	static const int	_FractionalBits = 8;

public :

	Fixed( void );
	Fixed( const Fixed &f);
	Fixed &operator=(const Fixed &f);
	~Fixed();
	
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
};
