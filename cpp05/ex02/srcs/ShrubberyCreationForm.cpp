/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 08:31:38 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/11/16 13:54:25 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../nclds/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm("ShrubberyCreationForm", 145, 137), _target("unknown"){
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &t): AForm("ShrubberyCreationForm", 145, 137), _target(t){

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &s): AForm(s){
	*this = s;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &s){
	if (this != &s)
	{
		_target = s._target;
		AForm::operator=(s);
	}
	return (*this);
}


void ShrubberyCreationForm::action( void ) const{


  std::ofstream file;
  file.open((_target + "_shrubbery").c_str());
  file << "                                  # #### ####" << std::endl;
  file << "                                ### \\/#|### |/####" << std::endl;
  file << "                               ##\\/#/ \\\\||/##/_/##/_#" << std::endl;
  file << "                             ###  \\/###|/ \\/ # ###" << std::endl;
  file << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
  file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
  file << "                           __#_--###`  |{,###---###-~" << std::endl;
  file << "                                     \\ }{" << std::endl;
  file << "                                      }}{" << std::endl;
  file << "                                      }}{" << std::endl;
  file << "                                      {{}}" << std::endl;
  file << "                                , -=-~{ .-^- _" << std::endl;
  file << "                                      `}" << std::endl;
  file << "                                       {" << std::endl;
  file.close();
}