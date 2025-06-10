/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:00:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/10 23:57:48 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



void	Phonebook::ft_all(int i)
{
	frontscreen();
	contact->displayed(i)
}

void	Phonebook::ft_search(int i)
{
	std::string search;

	std::cout << "Tapez le nom de l'index du contact a afficher : ";
	safe_gline(search);
	if (search == "")
		ft_all();
	if (search[0] < '1' || search[0] > 9)
	{
		while (search[0] < '1' || search[0] > '9')
		{
			std::cout << "Ce n'est pas un index ! Recommencez (entre 1 et 8) : ";
			safe_gline(search);
		}
	}
	frontscreen();
}

void	Phonebook::frontscreen(void)
{
	std::cout << '\n' << std::setfill('%') << std::setw(45) << "\n\n";
	std::cout << std::setfill(' ') << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|\n\n";

}

void	Phonebook::ft_phonebook(void)
{
	int			i;
	std::string	buffer;

	i = 0;
	while (1)
	{
		std::cout << "entrez une commande (ADD / SEARCH / EXIT) : ";
		safe_gline(buffer);
		// std::cout << "\n";
		if (buffer == "ADD")
		{
			contact[i].set_contact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (buffer == "SEARCH")
			ft_search();
		else if (buffer == "EXIT")
			return ;
	}
}

int main(void)
{
	Phonebook repertory;

	repertory.ft_phonebook();	
}
