/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:07:52 by nassuto           #+#    #+#             */
/*   Updated: 2025/10/23 12:47:51 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : Claptrap() {
	std::cout << "A new FragTrap constructor called, " << "A new FragTrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const std::string n ) : Claptrap(n){
	std::cout << "A new FragTrap constructor name personalized called, FragTrap [" << _name << "] is alive" <<std::endl;
	this->_Hit = 100;
	this->_Energypoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &s ) : Claptrap(s){
	std::cout << "A new FragTrap constructor copy called, FragTrap [" << _name << "] is alive" <<std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s){
	std::cout << "A new FragTrap copy assignment operator called, FragTrap [" << this->_name << "] is now : [";
	if (this != &s)
	this->Claptrap::operator=(s);
	std::cout << this->_name << "]." << std::endl;
	return (*this);
}

FragTrap::~FragTrap( void ){
	std::cout << "A new FragTrap destructor called, FragTrap [" << _name << "] is dead."<< std::endl;
}

void FragTrap::guardGate( void ){
	std::cout << "FragTrap [" << this->_name << "] is now in Gate keeper mode." << std::endl;

}

void	FragTrap::attack( const std::string &target){
	if (_Energypoint <= 0 || _Hit <=0)
		return ;
	std::cout << "FragTrap [" << _name << "] is attacking " << target << ", causing " << _attackDamage << std::endl;
}

void FragTrap::highFiveGuys(void) {
  std::cout << "Give me a big high five bro" << std::endl;
}