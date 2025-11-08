/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:40:02 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void){
	FragTrap o;
	FragTrap n("Nass");
	FragTrap q2;

	q2 = n;
	n.attack("saif");
	n.takeDamage(5);
	n.beRepaired(5);
	q2.guardGate();
	o.guardGate();
	n.highFiveGuys();
	n.beRepaired(5);
	
}