/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:29:06 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 19:59:27 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
	
protected:
	std::string type;

public:
	Animal( void );
	virtual ~Animal( void );
	Animal( const std::string t );
	Animal( const Animal &a );
	Animal &operator=( const Animal &a );
	virtual void	makeSound( void ) const;
	std::string getType( void ) const;
};