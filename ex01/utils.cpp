/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:36:00 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/13 17:56:09 by nkalkoul         ###   ########.fr       */
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
		std::cout << "Ce champ ne peut etre vide ! Recommencez : ";
		safe_gline(s);
	}
}

int	is_number(const std::string s)
{
	if (s.size() != 10 && s.size() != 12)
		return (0);
	if (!isdigit(s[0]))
		{
			if (s[0] != '+' || s.size() != 12)
				return (0);
		}

	for (int i = 1; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

void	wrong_number(std::string &s)
{
	while (!is_number(s))
	{
		std::cout << "Ce doit etre un numero valide ! Recommencez : ";
		safe_gline(s);
	}
}
