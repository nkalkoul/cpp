/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:48:22 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/15 18:09:06 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int parse(std::string &date, std::string &value){
	for (int i = 0; i < 10; i++){
		if (!std::isdigit(date[i]))
			return (false);
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &b){
	*this = b;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &b){
	if (this != &b)
		this->btc = b.btc;
	return (*this);
}

void BitcoinExchange::filldata(std::ifstream &file){
	std::string line;
	std::string date;
	std::string value;

	std::getline(file, line);
	while (std::getline(file, line)){
		if (file.eof())
			break;
		date = line.substr(0, 10);
		value = line.substr(11, line.size() - 11);
		data[date] = std::strtof(value.c_str(), NULL);
	}

	for (std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++){
		std::cout << "date = " << it->first << " === " << it->second << std::endl;
	}
}
