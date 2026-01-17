/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 13:08:54 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/17 09:46:32 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <map>
#include <string>
#include <iostream>
#include "fstream"
#include <cstdlib>
#include <exception>


class BitcoinExchange{

private:
std::map<std::string, float> data;

public:
	BitcoinExchange(void){};
	BitcoinExchange(const BitcoinExchange &b);
	BitcoinExchange &operator=(const BitcoinExchange &b);
	~BitcoinExchange(void){};
	void filldata(std::ifstream &data);
	void comparebtc(std::ifstream &file);
};
