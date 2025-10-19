/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 06:39:00 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/19 08:14:05 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>

class file {
	
private :
	std::string _namefile;
	std::ifstream _infile;
	std::ofstream _outfile;
	std::string _content;
	std::string _tofind;
	std::string _toreplace;

public :
	file (std::string name, std::string s1, std::string s2);
	void	file::createnew( void );
};