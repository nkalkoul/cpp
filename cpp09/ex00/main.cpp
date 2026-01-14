/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:11:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/14 15:02:52 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	
	if (ac > 2)
		return((std::cout << "Error: nb of args\n"), 1);	
	std::ifstream file("data.csv");
	if (file.fail())
		return (1);

	BitcoinExchange b;
	b.filldata(file);
	
}

