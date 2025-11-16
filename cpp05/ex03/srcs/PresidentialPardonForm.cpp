/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 08:31:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/13 16:31:37 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm("PresidentialPardonForm", 25, 5), _target("unknown"){
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &t): AForm("PresidentialPardonForm", 25, 5), _target(t){
	
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &s): AForm(s){
	*this = s;

}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &s){
	if (this != &s)
	{
		_target = s._target;
		AForm::operator=(s);
	}

	return (*this);
}

void PresidentialPardonForm::action( void )const {
	std::cout << _target << " has been gracied by Zaphod Beeblebroxxxx." << std::endl;
}
