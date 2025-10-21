/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:23:59 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/21 15:57:36 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed( const Fixed &f){
	*this = f;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( void ){
	std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f){
	
}