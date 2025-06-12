/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:29:43 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/11 04:32:26 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
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
