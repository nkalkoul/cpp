/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 07:44:18 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/21 08:19:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

Harl::Harl(void) {};

Harl::~Harl(void) {};

void Harl::debug(void) {
  std::cout << "[DEBUG TEST]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void) {
  std::cout << "[INFO TEST]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void) {
  std::cout << "[WARNING TEST]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "[ERROR TEST]" << std::endl;
  std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	
	std::string levels[4]{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl::*ptr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "i not recognize this level ..." << std::endl;
}