/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:49:04 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/29 00:40:57 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <cctype>

class ScalarConverter{

private:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter &s);
	ScalarConverter &operator=(const ScalarConverter *s);
	~ScalarConverter( void );
public:
	static void convert(const std::string &l);

};
