/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:33:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/27 04:41:31 by nkalkoul         ###   ########.fr       */
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
	
}
