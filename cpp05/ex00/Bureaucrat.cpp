/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:30 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/09 01:07:04 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("NoId"), _grade(150){
	std::cout << "basic constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, const int grade): _name(name), _grade(grade){
	std::cout << "personalized constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &b): _name(b._name){
	std::cout << "copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &b){
	std::cout << "copy operator called" << std::endl;
	if (this != &b)
		this->_grade = b._grade;
}