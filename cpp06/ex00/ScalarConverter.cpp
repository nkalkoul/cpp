/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:33:08 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/12/11 08:13:21 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
	
}

ScalarConverter::ScalarConverter( const ScalarConverter &s){
	*this = s;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s){
	if (this != &s)
		*this = s;
	return (*this);
}

ScalarConverter::~ScalarConverter( void ){
	
}

static std::string format_real(double d) {
    std::ostringstream oss;

    oss.setf(std::ios::fixed, std::ios::floatfield);
    oss << std::setprecision(6) << d;

    std::string out = oss.str();

    std::size_t dot = out.find('.');
    if (dot == std::string::npos)
        return out + ".0";

    std::size_t last = out.size() - 1;

    while (last > dot + 1 && out[last] == '0')
        last--;

    if (last == dot)
        last++;

    out.erase(last + 1);

    return out;
}

static void aff_lim(double d){
	if (std::isnan(d) || std::isinf(d)){
		std::cout << "char: impossible\nint: impossible\n";
		if (std::isnan(d)) {
    		std::cout << "float: nanf\n";
    		std::cout << "double: nan\n";
		}
		else if (std::isinf(d)) {
    		if (d > 0) {
        		std::cout << "float: +inff\n";
        		std::cout << "double: +inf\n";
    		} 
			else {
        		std::cout << "float: -inff\n";
        		std::cout << "double: -inf\n";
    		}
		}
	
	}
}

static void aff_float(const std::string &l){
    float f = std::strtof(l.c_str(), NULL);

    if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
        std::cout << "char: impossible\n";
    else if (std::isprint(static_cast<unsigned char>(static_cast<char>(f))))
        std::cout << "char: " << static_cast<char>(f) << "\n";
    else
        std::cout << "char: Non displayable\n";

    if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(f) << "\n";

    std::cout << "float: " << format_real(f) << "f\n";
    std::cout << "double: " << format_real(static_cast<double>(f)) << "\n";
}


static void aff_double(const std::string &l){
    double d = std::strtod(l.c_str(), NULL);

    if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
        std::cout << "char: impossible\n";
    else if (std::isprint(static_cast<unsigned char>(static_cast<char>(d))))
        std::cout << "char: " << static_cast<char>(d) << "\n";
    else
        std::cout << "char: Non displayable\n";

    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(d) << "\n";

    float f = static_cast<float>(d);
    if (std::isinf(f))
        std::cout << "float: impossible\n";
    else
        std::cout << "float: " << format_real(f) << "f\n";

    std::cout << "double: " << format_real(d) << "\n";
}

static bool is_double(const std::string &s)
{
    if (s.empty())
        return false;

    bool hasDigit = false;
    bool hasDot = false;

    std::size_t i = 0;

    if (s[i] == '+' || s[i] == '-') {
        i++;
        if (i >= s.size())
            return false;
    }

    for (; i < s.size(); i++)
    {
        char c = s[i];

        if (std::isdigit(static_cast<unsigned char>(c))) {
            hasDigit = true;
        }
        else if (c == '.') {
            if (hasDot)
                return false;
            hasDot = true;
        }
        else {
            return false;
        }
    }
    return hasDigit;
}

static void aff_int(int i){
    if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
        std::cout << "char: impossible\n";
    else if (std::isprint(static_cast<unsigned char>(static_cast<char>(i))))
        std::cout << "char: " << static_cast<char>(i) << "\n";
    else
        std::cout << "char: Non displayable\n";

    std::cout << "int: " << i << "\n";

    float f = static_cast<float>(i);
    std::cout << "float: " << format_real(f) << "f\n";

    double d = static_cast<double>(i);
    std::cout << "double: " << format_real(d) << "\n";
}

static bool is_int(const std::string &l){
	if (l.empty())
		return false;
	char c = l[0];
	if (!std::isdigit(static_cast<unsigned char>(c)) && c != '+' && c != '-')
		return false ;
	for (std::size_t i = 1; i < l.size(); i++){
		c = l[i];
		if (!std::isdigit(static_cast<unsigned char>(c)))
			return false ;
	}
	double d = std::strtod(l.c_str(), NULL);
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		return false ;
	int i = static_cast<int>(d);
	return (aff_int(i), true);
}

static bool is_lim(const std::string &l){
	if (l == "nan" || l == "+inf" || l == "-inf"
		|| l == "inf"){
		double d = std::strtod(l.c_str(), NULL);
		aff_lim(d);
		return (true);
	}
	else if (l == "nanf" || l == "+inff" || l == "-inff"
		|| l == "inff"){
		float f = std::strtof(l.c_str(), NULL);
		double d = static_cast<double>(f);
		aff_lim(d);
		return (true);
	}
	return false ;
}

static bool is_float(const std::string &l) {
	if (l.empty() || l[l.size() - 1] != 'f')
		return false;

	std::string core = l.substr(0, l.size() - 1);
	if (core.empty())
		return false;

	char c = core[0];
	bool ispoint = false;
	bool hasDigit = false;

	if (!std::isdigit(static_cast<unsigned char>(c)) &&
		c != '+' && c != '-' && c != '.')
		return false;
	if (std::isdigit(static_cast<unsigned char>(c)))
		hasDigit = true;
	if (c == '.')
		ispoint = true;
	if (!std::isdigit(static_cast<unsigned char>(c)) &&
		core.size() == 1)
		return false;
	for (std::size_t i = 1; i < core.size(); i++) {
		c = core[i];
		if (std::isdigit(static_cast<unsigned char>(c))) {
			hasDigit = true;
		}
		else if (c == '.') {
			if (ispoint)
				return false;
			ispoint = true;
		}
		else
			return false;
	}
	return hasDigit;
}

static void aff_char(const std::string &l){
    char c = l[0];

    if (std::isprint(static_cast<unsigned char>(c)))
        std::cout << "char: " << c << "\n";
    else
        std::cout << "char: Non displayable\n";

    std::cout << "int: " << static_cast<int>(c) << "\n";
    std::cout << "float: " << format_real(static_cast<float>(c)) << "f\n";
    std::cout << "double: " << format_real(static_cast<double>(c)) << "\n";
}

static bool is_char(const std::string &s) {
    return s.size() == 1;
}


void ScalarConverter::convert(const std::string &l){

	if (is_lim(l))
		return ;
	else if (is_float(l))
		return (aff_float(l));
	else if (is_int(l))
		return ;
	else if (is_double(l))
		return (aff_double(l));
	else if (is_char(l))
		return (aff_char(l));
	else
		throw std::runtime_error("no valid argument");
}
