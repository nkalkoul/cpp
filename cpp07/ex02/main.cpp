/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 12:29:25 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/18 11:54:09 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ){
	try {
		Array<std::string> str(5);
		for (unsigned int i = 0; i < str.size(); i++){
			char a = i + 48;
			str[i] = a;
		}
		Array<std::string> s(str);
		std::cout << " str = ";
		for (unsigned int i = 0; i < s.size(); i++){
			std::cout << str[i] << " ";
		}
		std::cout << std::endl;
		std::cout << " s = ";
		for (unsigned int i = 0; i < s.size(); i++){
			std::cout << str[i] << " ";
		}
		
		std::cout << std::endl << str[6];
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;	
	};
}