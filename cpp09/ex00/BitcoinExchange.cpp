/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:48:22 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/17 11:21:44 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool parse_date(std::string &date){

	for (int i = 0; i < 10; i++){
		if (i == 4 || i == 7){
			if (date[i] != '-')
				return (1);
			i++;
		}
	if (!std::isdigit(static_cast<unsigned char>(date[i])))
   		return false;

	}
	
	int year = std::strtod(date.substr(0, 4).c_str(), NULL);
	int month = std::strtod(date.substr(5, 2).c_str(), NULL);
	int day = std::strtod(date.substr(8, 2).c_str(), NULL);

	if (year > 2026 || year < 2008)
		return (false);
	if (month < 1 || month > 12)
		return (false);
	if (day < 1)
		return (false);
	if ((month < 8 && month != 2 && month % 2 == 1) ||
			(month >= 8 && month % 2 == 0)){
			if (day > 31)
				return (false);
	}
	else if (month == 2){
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			if (day > 29)
				return (false);
		}
		else {
			if (day > 28)
				return (false);
		}
	}
	else {
		if (day > 30)
			return (false);
	}
	return (true);
}

static bool parse_value(std::string &value){

	if (value.size() < 1)
		return (false);
	char *end;
	float test = std::strtof(value.c_str(), &end);
	if (value == "nan" || value == "nanf")
		return (false);
	if (*end != '\0'){
		if (*end == 'f' && *(end + 1) == '\0' && value.size() > 1)
			return (true);
		return (false);
	}
	return (true);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &b){
	*this = b;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &b){
	if (this != &b)
		this->data = b.data;
	return (*this);
}


void BitcoinExchange::filldata(std::ifstream &file){
	std::string line;
	std::string date;
	std::string value;

	std::getline(file, line);
	while (std::getline(file, line)){

		if (line.size() < 12){
			throw std::runtime_error ("Error: bad indentation in data.csv file");
		}
		date = line.substr(0, 10);
		value = line.substr(11, line.size() - 11);
		if (parse_date(date) == false || parse_value(value) == false || line[10] != ','){
			throw std::runtime_error ("Error: bad indentation in data.csv file");
		}
		data[date] = std::strtof(value.c_str(), NULL);
	}
	if (data.empty())
		throw std::runtime_error("Error: no data in data.csv file");

}

static bool parse_input(std::string &date, std::string value, float mtp){

	bool p = parse_value(value);

	if (p == false){
		std::cerr << "Error: bad input => " << value << std::endl;
		return (false);
	}
	if (mtp < 0){
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (mtp > 1000){
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::comparebtc(std::ifstream &file){
	std::string line;
	std::string date;
	std::string value;

	std::getline(file, line);
	bool hasdata = false;
	while (std::getline(file, line)){
		hasdata = true;
		if (line.size() < 10){
			std::cerr << "line too small" << std::endl;
			continue;
		}
		date = line.substr(0, 10);
		bool p2 = parse_date(date);
		if (p2 == false){
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		if (line.size() < 13){
			std::cerr << "line too small" << std::endl;
			continue;
		}
		if (line.substr(10, 3) != " | "){
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		value = line.substr(13, (line.size() - 13));
		float mtp = std::strtof(value.c_str(), NULL);
		if (parse_input(date, value, mtp) == false)
			continue;

		std::map<std::string, float>::iterator it = data.find(date);
		if (it == data.end()){
			it = data.lower_bound(date);
			if (it == data.end())
				it--;
			else if (it == data.begin()){
				std::cerr << "no data available before " << date << std::endl;
				continue; 
			}
			else
				it--;
		}
		std::cout << date << " => " << value << " = " << it->second * mtp << std::endl;
		
	}
	if (hasdata == false)
		throw std::runtime_error("Error: file empty");
}
