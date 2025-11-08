/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:46:57 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:37:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("NoId"), _Hit(10), _Energypoint(10), _attackDamage(0){
	std::cout << "basic constructor" << std::endl;
}

ClapTrap::ClapTrap( const std::string n) : _name(n), _Hit(10), _Energypoint(10), _attackDamage(0){
	std::cout << "personalized constructor" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &c){
	std::cout << "copy constructor" << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "destructor" << std::endl;
	
}

ClapTrap &ClapTrap::operator=( const ClapTrap &c){
	if (this != &c){
		this->_name = c._name;
		this->_attackDamage = c._attackDamage;
		this->_Energypoint = c._Energypoint;
		this->_Hit = c._Hit;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string &target){
	if (_Energypoint <= 0 || _Hit <=0)
		return ;
	std::cout << "ClapTrap " << _name << " is attacking " << target << ", causing " << _attackDamage << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount){
	_Hit -= amount;
	std::cout << "ClapTrap " << _name << " taking " << amount << " damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	_Hit += amount;
	std::cout << "ClapTrap " << _name << " was repaired " << amount << " hit points" << std::endl;
}


