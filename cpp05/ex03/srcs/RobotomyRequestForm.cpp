/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 08:31:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/16 13:54:10 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 145, 137), _target("unknown"){
	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &r): AForm("RobotomyRequestForm", 145, 137), _target(r){
	
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &s): AForm(s){
	*this = s;
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &s){
	if (this != &s)
	{
		_target = s._target;
		AForm::operator=(s);
	}
	return (*this);
}

void	RobotomyRequestForm::action( void ) const{
	static bool fifty = false;
	std::cout << "drrrrrrrrrrrrr " << "....  ";
	if (fifty == false){
		fifty = true;
		std::cout << "SUCCESS !!! [" << _target << "] has been robotomised !" << std::endl;
	}
	else{
		fifty = false;
		std::cout << "Robotimastion failure ..." << std::endl;
	}
}