/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 05:51:03 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/06/06 06:19:19 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string	final;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1;i < ac ; i++)
		final = final + av[i];
	for (int i = 0; final[i]; i++)
		final[i] = std::toupper(final[i]);
	std::cout << final << std::endl;
	return (0);
}
