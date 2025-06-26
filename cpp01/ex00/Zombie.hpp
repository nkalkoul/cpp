/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:57:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/23 23:16:07 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie {
	
public:

	Zombie( std::string name );
	~Zombie( void );
	void	announce( void );
	
	private:
	
	std::string name;

};

Zombie	*newZombie( std::string name );
void randomChump( std::string name );