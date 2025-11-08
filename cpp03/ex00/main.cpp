/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/26 21:37:13 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void){
	ClapTrap ayb("ayoub");
	ClapTrap ayb2(ayb);

	ayb.attack("saif");
	ayb2.takeDamage(8);
	ayb.beRepaired(7);
}