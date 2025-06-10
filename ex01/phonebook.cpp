/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 12:00:05 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/09 04:42:29 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::ft_add_contact(int i)
{
	contact[i].set_contact();
}

void	Phonebook::ft_search(void)
{
	int i;

	i = 0;
	contact[i].get_all();
}

int main(void)
{
	Phonebook repertory;
	std::string	buffer;
	int i;

	i = 0;
	while (1)
	{
		std::cout << "entrez une commande (ADD / SEARCH / EXIT) : ";
		safe_gline(buffer);
		// std::cout << "\n";
		if (buffer == "ADD")
		{
			repertory.ft_add_contact(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (buffer == "SEARCH")
		{
			
		}
		else if (buffer == "EXIT")
			return (0);
	}
}
