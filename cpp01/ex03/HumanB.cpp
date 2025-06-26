/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:05:22 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 20:54:38 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name){
	this->name = name;
	weapon = NULL;
}

void	HumanB::attack( void ){
	if (weapon != NULL)
		std::cout << name << " arracks with ther " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &w){
	weapon = &w;
}
