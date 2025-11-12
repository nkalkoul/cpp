/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:15:30 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/12 19:54:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include AForm.hpp"

Bureaucrat::Bureaucrat( void ): _name("NoId"), _grade(150){
	std::cout << "basic constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, const int grade): _name(name), _grade(grade){
	std::cout << "personalized constructor called" << std::endl;
	if (_grade > 150)
		throw GradeTooLowException(_name, _grade);
	if (_grade < 1)
		throw GradeTooHighException(_name, _grade);
}

Bureaucrat::Bureaucrat( const Bureaucrat &b): _name(b._name){
	std::cout << "copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &b){
	std::cout << "copy operator called" << std::endl;
	if (this != &b)
		this->_grade = b._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "destructor " << _name << " called" << std::endl;
}

int	Bureaucrat::getGrade( void ) const{
	return (_grade);
}

std::string Bureaucrat::getName( void ) const{
	return (_name);
}

void Bureaucrat::upgrade( void ){
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException(_name, _grade);
}

void Bureaucrat::downgrade( void ){
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException(_name, _grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &a){
	out << a.getName() << ", bureaucrat grade " << a.getGrade() << '.';
	return (out);
}

void Bureaucrat::signForm( AForm &f ){
	try{
		f.beSigned(*this);
	}
	catch(const std::exception &e){
		std::cerr << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	std::cout << this->_name << " signed " << f.getName() << std::endl;
}