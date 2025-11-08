/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:29:06 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/25 00:23:26 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
private:
	Brain *br;	
public:
	Cat( void );
	virtual ~Cat( void );
	Cat( const std::string t );
	Cat( const Cat &a );
	Cat &operator=( const Cat &a );
	void	makeSound( void ) const;
	void setid(const std::string id);
	void lookid( void );
};
