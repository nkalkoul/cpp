/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:50:30 by nkalkoul          #+#    #+#             */
/*   Updated: 2026/01/19 10:53:37 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(const std::string &l):line(l){
	
}

RPN::RPN(const RPN &r){
	*this = r;
}

RPN	&RPN::operator=(const RPN &r){
	if (this != &r)
		this->line = r.line;
	return(*this);
}

static void parse(std::string &line){
	std::string a = "0123456789+-/* ";
	
	for (std::string::iterator it = line.begin(); it != line.end(); ++it){
		
		if (a.find(*it) == std::string::npos)
			throw std::runtime_error("Error");
		if (*it != ' ' && (it + 1) != line.end() && *(it + 1) != ' ')
			throw std::runtime_error("Error");
		if (*it == ' ' && ((it + 1) == line.end() || *(it + 1) == ' '))
			throw std::runtime_error("Error");
	}
	
	line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
}

static bool lim(long r){
	if (r < std::numeric_limits<int>::min() || r > std::numeric_limits<int>::max())
		return false;
	return true;
}

static int sign(char m, int a, int b){
	long result;

	switch (m){
		case ('*'):
			result = static_cast<long>(a) * b;
			if (!lim(result))
				throw std::runtime_error("Error");
			return (static_cast<int>(result));
		case ('/'):
			if (b == 0)
				throw std::runtime_error("Error");
			result = static_cast<long>(a) / b;
			if (!lim(result))
				throw std::runtime_error("Error");
			return (static_cast<int>(result));			
		case ('-'):
			result = static_cast<long>(a) - b;
			if (!lim(result))
				throw std::runtime_error("Error");
			return (static_cast<int>(result));
		case ('+'):
			result = static_cast<long>(a) + b;
			if (!lim(result))
				throw std::runtime_error("Error");
			return (static_cast<int>(result));
		default:
			throw std::runtime_error("Error");
	}
}

void RPN::calculator(void){
	std::stack<int> co;
	int a;
	int b;

	parse(line);
	for (std::string::iterator it = line.begin(); it != line.end(); ++it){
		if (std::isdigit(*it))
			co.push(static_cast<int>(*it - 48));
		else {
			if (co.size() < 2)
				throw std::runtime_error("Error");
			b = co.top();
			co.pop();
			a = co.top();
			co.pop();
			co.push(sign(*it, a, b));
		}
	}
	if (co.size() != 1)
		throw std::runtime_error("Error");
	std::cout << co.top() << std::endl;
}
