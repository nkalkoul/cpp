/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:36:00 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/09 05:05:38 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	safe_gline(std::string &s)
{
	if (!std::getline(std::cin, s))
	{
		std::cout << "\nError input or eof\n";
		exit(1);
	}
}

void	empty_line(std::string &s)
{
	while (s == "")
	{
		std::cout << "Ce champ ne peut etre vide ! Recommencez.";
		safe_gline(s);
	}
}
