/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:33:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/29 00:43:04 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
	
}

ScalarConverter::ScalarConverter( const ScalarConverter &s){
	*this = s;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s){
	return (*this);
}

ScalarConverter::~ScalarConverter( void ){
	
}

void ScalarConverter::convert(const std::string &l){
	int t = 0;

	if (l[0] == '-' || l[0] == '+'){
		t = 1;
		for (int i; i = 1; i++){
			if (!std::isprint(static_cast<unsigned char>(l[i]))){
				throw std::runtime_error("no printable character");
			}
			if (!std::isdigit(static_cast<unsigned char>(l[i]))){
					t = 2;
					break;
			}
		}
	}
	
}
