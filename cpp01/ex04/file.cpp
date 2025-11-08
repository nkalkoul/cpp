/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:16:48 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/23 16:10:00 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

file::file( std::string name, std::string s1, std::string s2 ) : _namefile(name), _tofind(s1), _toreplace(s2) {
	return ;
}

file::~file( void ){}

void	file::createnew( void ){

	std::string	line;
	std::string	content;
	size_t	pos;

	pos = 0;
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
	while(std::getline(_infile, line))
	{
		content += line;
		if (!_infile.eof())
			content += "\n";
	}
	while ((pos = content.find(this->_tofind, pos)) != std::string::npos){
		content = content.substr(0, pos) + _toreplace + content.substr(pos + _tofind.size(), content.size());
		pos += _toreplace.size();
	}
	_outfile << content;
}
