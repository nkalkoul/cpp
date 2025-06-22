/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:29:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/22 16:23:28 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <cctype>
#include "contact.hpp"

class Phonebook
{
	private:

	Contact contact[9];
	
	public:
	
	void	ft_phonebook(void);
	void	ft_search(void);
	void	frontscreen(void);
	void	ft_all(void);
};

void	safe_gline(std::string &s);
void	empty_line(std::string &s);
int		is_number(const std::string s);
void	wrong_number(std::string &s);
