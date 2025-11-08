/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:39:46 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void){
	ScavTrap n;
	ScavTrap s("saif");
	ScavTrap s2;

	s2 = s;
	n.attack("saif");
	s.takeDamage(5);
	n.beRepaired(5);
	s.guardGate();
	s2.guardGate();
}