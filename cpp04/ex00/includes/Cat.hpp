/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:29:06 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 21:15:46 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal 
{
	
public:
	Cat( void );
	virtual ~Cat( void );
	Cat( const std::string t );
	Cat( const Cat &a );
	Cat &operator=( const Cat &a );
	void	makeSound( void ) const;
};
