/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:47:19 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 20:40:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Claptrap{

private:
	
	std::string _name;
	int _Hit;
	int	_Energypoint;
	int _attackDamage;

public:
	Claptrap( void );
	Claptrap(const std::string n);
	Claptrap(const Claptrap &c);
	Claptrap &operator=(const Claptrap &c);
	~Claptrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
