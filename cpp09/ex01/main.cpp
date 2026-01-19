/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:50:19 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/19 10:36:56 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cerr << "bad nbr of args" << std::endl;
		return (1);
	}
	RPN a(av[1]);
	try {
		a.calculator();
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
