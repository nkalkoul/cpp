/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:29:24 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/09 04:36:12 by nkalkoul         ###   ########.fr       */
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
}

void	Contact::set_info(std::string &s)
{
	safe_gline(s);
	if (s == "")
		empty_line(s);
}

void	Contact::get_all(void)
{
	std::cout << _first_name << "// ";
	std::cout << _last_name << "// ";
	std::cout << _nick_name << "// ";
	std::cout << _number << "// ";
	std::cout << _secret << "// \n";
}