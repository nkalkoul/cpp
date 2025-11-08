/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:57:18 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/24 19:59:41 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
	
protected:
	std::string type;

public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( const std::string t );
	WrongAnimal( const WrongAnimal &a );
	WrongAnimal &operator=( const WrongAnimal &a );
	void	makeSound( void ) const;
	std::string getType( void ) const;
};