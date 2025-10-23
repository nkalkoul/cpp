/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/23 12:02:01 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

int	main(void){
	ScavTrap n;
	ScavTrap s("saif");
	ScavTrap s2;

	s2 = s;
	s.guardGate();
	s2.guardGate();
	n.guardGate();
}