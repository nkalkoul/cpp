/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:05:07 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 20:46:15 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB {

public :
	HumanB( std::string name);
	void	attack( void );
	void	setWeapon(Weapon &w);

private :
	std::string name;
	Weapon *weapon;

};