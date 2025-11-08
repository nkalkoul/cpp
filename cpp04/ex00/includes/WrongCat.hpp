/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:57:54 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 19:58:36 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
	
public:
	WrongCat( void );
	virtual ~WrongCat( void );
	WrongCat( const std::string t );
	WrongCat( const WrongCat &a );
	WrongCat &operator=( const WrongCat &a );
	void	makeSound( void ) const;
};
