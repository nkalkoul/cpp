/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:52 by nassuto           #+#    #+#             */
/*   Updated: 2025/10/23 12:01:32 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

ScavTrap::ScavTrap( void ) : Claptrap() {
	std::cout << "ScavTrap constructor called, " << "scavtrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const std::string n ) : Claptrap(n){
	std::cout << "ScavTrap constructor name personalized called, scavtrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &s ) : Claptrap(s){
	std::cout << "ScavTrap constructor copy called, scavtrap [" << _name << "] is alive" <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s){
	std::cout << "ScavTrap copy assignment operator called, scavtrap [" << this->_name << "] is now : [";
	if (this != &s)
	this->Claptrap::operator=(s);
	std::cout << this->_name << "]." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap( void ){
	std::cout << "Scavtrap destructor called, scavtrap [" << _name << "] is dead."<< std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "Scavtrap [" << this->_name << "] is now in Gate keeper mode." << std::endl;

}