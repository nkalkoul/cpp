/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:29:06 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 19:39:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	
public:
	Dog ( void );
	virtual ~Dog ( void );
	Dog ( const std::string t );
	Dog ( const Dog  &a );
	Dog  &operator=( const Dog  &a );
	void	makeSound( void ) const;
};