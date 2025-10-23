/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:46:57 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 21:07:41 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap( void ) : _name("NoId"), _Hit(10), _Energypoint(10), _attackDamage(0){
	std::cout << "basic constructor" << std::endl;
}

Claptrap::Claptrap( const std::string n) : _name(n), _Hit(10), _Energypoint(10), _attackDamage(0){
	std::cout << "personalized constructor" << std::endl;
}

Claptrap::Claptrap( const Claptrap &c){
	std::cout << "copy constructor" << std::endl;
	*this = c;
}

Claptrap::~Claptrap( void ){
	std::cout << "destructor" << std::endl;
	
}

Claptrap &Claptrap::operator=( const Claptrap &c){
	if (this != &c){
		this->_name = c._name;
		this->_attackDamage = c._attackDamage;
		this->_Energypoint = c._Energypoint;
		this->_Hit = c._Hit;
	}
	return (*this);
}

void	Claptrap::attack( const std::string &target){
	if (_Energypoint <= 0 || _Hit <=0)
		return ;
	std::cout << "ClapTrap " << _name << " is attacking " << target << ", causing " << _attackDamage << std::endl;
}

void Claptrap::takeDamage( unsigned int amount){
	_Hit -= amount;
	std::cout << "Claptrap " << _name << " taking " << amount << " damage" << std::endl;
}

void	Claptrap::beRepaired(unsigned int amount){
	_Hit += amount;
	std::cout << "Claptrap " << _name << " was repaired " << amount << " hit points" << std::endl;
}


