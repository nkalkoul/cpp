/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 05:09:18 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/10 19:20:51 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

#pragma once

class Contact
{
	private:
	
	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _number;
	std::string _secret;
	
	public:
	
	void	set_info(std::string &s);
	void	set_contact(void);
	void	displayed(int i);
};
