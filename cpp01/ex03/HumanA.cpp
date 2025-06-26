/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:04:34 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 21:29:51 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &w ) : weapon(w){
	this->name = name;
	return ;
}

void	HumanA::attack( void ){
	std::cout << name << " arracks with ther " << weapon.getType() << std::endl;
}
