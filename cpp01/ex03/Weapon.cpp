/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 01:03:41 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/24 21:32:39 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType( void ){
	return (type);
}

void	Weapon::setType( std::string type ){
	this->type = type;
}

Weapon::Weapon( std::string type){
		this->type = type;
	}
