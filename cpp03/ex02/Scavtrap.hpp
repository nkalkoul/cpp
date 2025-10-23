/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:10:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/23 12:18:41 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Claptrap.hpp"

class ScavTrap : public Claptrap 
{

public:

	ScavTrap( void );
	ScavTrap( const std::string n );
	ScavTrap( const ScavTrap &s);
	ScavTrap &operator=(const ScavTrap &s);
	~ScavTrap( void );
	void attack( const std::string &target);
	void guardGate( void );
};