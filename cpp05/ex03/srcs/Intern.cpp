/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:28:03 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/22 18:43:51 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/Intern.hpp"
#include "../nclds/ShrubberyCreationForm.hpp"
#include "../nclds/PresidentialPardonForm.hpp"
#include "../nclds/RobotomyRequestForm.hpp"

Intern::Intern( void ){
	
}

Intern::Intern( const Intern &i){
	*this = i;
}

Intern &Intern::operator=(const Intern &i){
	(void)i;
	return *this;
		
}

Intern::~Intern( void ){
	
}

AForm *Intern::makeform(std::string const &formName, std::string const &target){
	int i = 0;

	std::string form[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (i < 3){
		if (form[i] == formName)
			break;
		i++;
	}
	switch (i){
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
		default:
			throw std::runtime_error("le nom du formulaire n'est pas reconnu");
		}
}
