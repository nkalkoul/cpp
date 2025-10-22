/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:00:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/22 17:17:30 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"



void	Phonebook::ft_all(void)
{
	frontscreen();
	for (int i = 0; contact[i].get_last() != 1; i++)
		contact[i].displayed(i + 1);
	std::cout << '\n';
}

void	Phonebook::ft_search(void)
{
	int			i;
	int 		j = 0;
	std::string search;

	std::cout << "\nTapez l'index du contact a afficher : ";
	safe_gline(search);
	while (search.size() > 1 || search[0] < '1' || search[0] > '9')
	{
		std::cout << "Ce n'est pas un index ! Recommencez (entre 1 et 8) : ";
		safe_gline(search);
	}
	i = search[0] - 48;
	while (contact[j].get_last() == 0)
		j++;
	if (i > j)
	{
		std::cout << "\nPas de contact a cet index !\n";
		ft_search() ;
		return ;
	}
	contact[i - 1].displayone();
	std::cout << '\n';
}

void	Phonebook::frontscreen(void)
{
	std::cout << '\n' << std::setfill('&') << std::setw(45) << "\n";
	std::cout << '&' << std::setfill(' ') << std::right << std::setw(44) << "&\n";
	std::cout << std::setfill('&') << std::setw(12) << "" << std::left << std::setw(14) << " P H O N E B O O K " << std::right << std::setw(13) << "" << std::endl;
	std::cout << '&' << std::setfill(' ') << std::right << std::setw(44) << "&\n";
	std::cout << std::setfill('&') << std::setw(46) << "\n\n";
	std::cout << std::setfill(' ') << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|\n";

}

void	Phonebook::ft_phonebook(void)
{
	int			i;
	int			last;
	std::string	buffer;

	i = 0;
	last = 0;
	contact[i].is_last();
	while (1)
	{
		std::cout << "entrez une commande (ADD / SEARCH / EXIT) : ";
		safe_gline(buffer);
		if (buffer == "ADD")
		{
			contact[i].set_contact();
			i++;
			if (last == 0)
				contact[i].is_last();
			if (i == 8)
			{
				last = 1;
				i = 0;
			}
		}
		else if (buffer == "SEARCH")
		{
			ft_all();
			ft_search();
		}
		else if (buffer == "EXIT")
			return ;
	}
}

int main(void)
{
	Phonebook repertory;

	repertory.ft_phonebook();
	return(0);
}
