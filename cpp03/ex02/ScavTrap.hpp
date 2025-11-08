/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:10:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:39:46 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
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