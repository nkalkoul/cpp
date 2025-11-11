/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nassuto <nassuto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:23:17 by nassuto           #+#    #+#             */
/*   Updated: 2025/11/11 19:59:51 by nassuto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _name("formulaire basic"),
_sign(false),
_signgrade(150),
_execgrade(150){
}

Form::Form( const std::string &name, int grade ):
_name(name),
_sign(false),
_signgrade(grade),
_execgrade(grade){
	if (grade > 150)
		throw Form::GradeTooLowException();
	if (grade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &f):
_name(f._name),
_signgrade(f._signgrade),
_execgrade(f._execgrade){
	*this = f;
}

Form	&Form::operator=(const Form &f){
	if (this != &f)
		this->_sign = f._sign;
	return (*this);
}

Form::~Form( void ){
	
}

int	Form::getexecGrade( void ) const{
	return (this->_execgrade);
}

int	Form::getsignGrade( void ) const{
	return (this->_signgrade);
}

bool	Form::ifsigned( void ) const{
	return (this->_sign);
}

std::string Form::getName( void ) const{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, Form &f){
	out << "formulaire : " << f.getName() << " require un grade de " << f.getexecGrade() << " pour etre executé et de grade : " << f.getsignGrade() << " pour etre signé. signature : " << f.ifsigned(); 
	return (out);
}

void Form::beSigned( Bureaucrat const &b){
	if (b.getGrade() <= _signgrade)
		_sign = true;
	else
		throw Form::GradeTooLowException();
}