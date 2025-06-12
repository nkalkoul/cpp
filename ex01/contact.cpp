/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:29:24 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/11 06:00:58 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Contact::set_contact(void)
{
	std::cout << "Quel est le prenom du contact ? : ";
	set_info(_first_name);
	std::cout << "Son nom ? : ";
	set_info(_last_name);
	std::cout << "Son surnom ? : ";
	set_info(_nick_name);
	std::cout << "Son numero ? : ";
	set_info(_number);
	std::cout << "Et pour finir, son piiire secret ? : ";
	set_info(_secret);
	last = 0;
}

void	Contact::set_info(std::string &s)
{
	safe_gline(s);
	if (s == "")
		empty_line(s);
}
void	Contact::is_last(void)
{
	last = 1;
}

void	Contact::displayed(int i)
{
	if (_first_name.size() > 10)
		_first_name = _first_name.substr(0, 9) + '.';
	if (_last_name.size() > 10)
		_last_name = _last_name.substr(0, 9) + '.';
	if (_nick_name.size() > 10)
		_nick_name = _nick_name.substr(0, 9) + '.';
	std::cout << std::setw(10) << i << '|';
	std::cout << std::setw(10) << _first_name << '|';
	std::cout << std::setw(10) << _last_name << '|';
	std::cout << std::setw(10) << _nick_name << "|\n";
}
