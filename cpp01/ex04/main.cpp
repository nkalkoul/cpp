/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalkoul <nkalkoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 07:05:58 by nkalkoul          #+#    #+#             */
/*   Updated: 2025/10/19 08:16:11 by nkalkoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int	main(int ac, char **av){

	if (ac != 4)
		return (std::cout << "Error number of parameters (three)" << std::endl , 0);
	file f = file(av[1], av[2], av[3]);
	f.createnew();	
}