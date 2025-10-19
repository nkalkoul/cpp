/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:16:48 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/19 08:27:55 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

file::file( std::string name, std::string s1, std::string s2 ) : _namefile(name), _tofind(s1), _toreplace(s2) {
	return ;
}

void	file::createnew( void ){
	_infile.open(this->_namefile.c_str());
	if (!_infile.is_open()){
		std::cerr << "Error open infile ! verify infile name" << std::endl;
		return ;
	}
	_outfile.open(_namefile.append(".replace").c_str());
	if (!_outfile.is_open()){
		std::cerr << "Error open outfile ! retry." << std::endl;
		return ;
	}
}
