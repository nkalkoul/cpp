/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:10:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/23 12:47:32 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Claptrap.hpp"

class FragTrap : public Claptrap 
{

public:

	FragTrap( void );
	FragTrap( const std::string n );
	FragTrap( const FragTrap &s);
	FragTrap &operator=(const FragTrap &s);
	~FragTrap( void );
	void attack( const std::string &target);
	void guardGate( void );
	void highFiveGuys(void);
};