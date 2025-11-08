/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:47:19 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:37:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{

private:
	
	std::string _name;
	int _Hit;
	int	_Energypoint;
	int _attackDamage;

public:
	ClapTrap( void );
	ClapTrap(const std::string n);
	ClapTrap(const ClapTrap &c);
	ClapTrap &operator=(const ClapTrap &c);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
