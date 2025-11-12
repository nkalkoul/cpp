/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:23:17 by nassuto           #+#    #+#             */
/*   Updated: 2025/11/12 19:54:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ): _name("formulaire basic"),
_sign(false),
_signgrade(150),
_execgrade(150){
}

AForm::AForm( const std::string &name, int grade ):
_name(name),
_sign(false),
_signgrade(grade),
_execgrade(grade){
	if (grade > 150)
		throw AForm::GradeTooLowException();
	if (grade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &f):
_name(f._name),
_signgrade(f._signgrade),
_execgrade(f._execgrade){
	*this = f;
}

AForm	&AForm::operator=(const AForm &f){
	if (this != &f)
		this->_sign = f._sign;
	return (*this);
}

AForm::~AForm( void ){
	
}

int	AForm::getexecGrade( void ) const{
	return (this->_execgrade);
}

int	AForm::getsignGrade( void ) const{
	return (this->_signgrade);
}

bool	AForm::ifsigned( void ) const{
	return (this->_sign);
}

std::string AForm::getName( void ) const{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, AForm &f){
	out << "formulaire : " << f.getName() << " require un grade de " << f.getexecGrade() << " pour etre executé et de grade : " << f.getsignGrade() << " pour etre signé. signature : " << f.ifsigned(); 
	return (out);
}

void AForm::beSigned( Bureaucrat const &b){
	if (b.getGrade() <= _signgrade)
		_sign = true;
	else
		throw AForm::GradeTooLowException();
}