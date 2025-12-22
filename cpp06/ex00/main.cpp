/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 07:23:00 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 08:34:43 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac > 2)
		return (std::cout << "need one param\n", 1);
	
	try{
		
		ScalarConverter::convert(av[1]);
	}
	catch (const std::exception &e){
		std::cerr << "catch : " << e.what() << std::endl;
	}
}