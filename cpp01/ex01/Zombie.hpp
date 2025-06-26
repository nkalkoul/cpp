/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:57:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 00:02:37 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
	
public:

	Zombie( void );
	void	setname( std::string name );
	~Zombie( void );
	void	announce( void );
	
private:
	
	std::string name;

};

Zombie* zombieHorde( int N, std::string name );
