/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:29:06 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/27 03:52:34 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
	Brain *br;

public:
	Dog ( void );
	 ~Dog ( void );
	Dog ( const std::string t );
	Dog ( const Dog  &a );
	Dog  &operator=( const Dog  &a );
	void	makeSound( void ) const;
	void	setid(const std::string id);
	void lookid( void );

};