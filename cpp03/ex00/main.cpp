/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 21:02:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int	main(void){
	Claptrap ayb("ayoub");
	Claptrap ayb2(ayb);

	ayb.attack("saif");
	ayb2.takeDamage(8);
	ayb.beRepaired(7);
}