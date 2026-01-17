/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:11:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/17 09:50:06 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	
	if (ac != 2)
		return((std::cout << "Error: nb of args\n"), 1);	
	std::ifstream data("data.csv");
	if (data.fail()){
		std::cerr << "error open data.csv file" << std::endl;
		return (1);
	}
	std::ifstream file(av[1]);
	if (file.fail()){
		std::cerr << "error open file" << std::endl;
		return (1);
	}
	try {
	BitcoinExchange b;
	
	b.filldata(data);
	b.comparebtc(file);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

