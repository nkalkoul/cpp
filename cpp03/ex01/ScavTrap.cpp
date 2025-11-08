/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:52 by nassuto           #+#    #+#             */
/*   Updated: 2025/10/26 21:39:46 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap constructor called, " << "ScavTrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const std::string n ) : ClapTrap(n){
	std::cout << "ScavTrap constructor name personalized called, ScavTrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &s ) : ClapTrap(s){
	std::cout << "ScavTrap constructor copy called, ScavTrap [" << _name << "] is alive" <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s){
	std::cout << "ScavTrap copy assignment operator called, ScavTrap [" << this->_name << "] is now : [";
	if (this != &s)
	this->ClapTrap::operator=(s);
	std::cout << this->_name << "]." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap destructor called, ScavTrap [" << _name << "] is dead."<< std::endl;
}

void ScavTrap::guardGate( void ){
	std::cout << "ScavTrap [" << this->_name << "] is now in Gate keeper mode." << std::endl;

}

void	ScavTrap::attack( const std::string &target){
	if (_Energypoint <= 0 || _Hit <=0)
		return ;
	std::cout << "ScavTrap [" << _name << "] is attacking " << target << ", causing " << _attackDamage << std::endl;
}