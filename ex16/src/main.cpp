/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:07 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 12:17:28 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <algorithm>
#include "Harl.hpp"

int	main( int argc, char **argv ) {
	
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter \"MESSAGE_LEVEL\"\n";
		return (1);
	}
	Harl harl;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = std::distance(levels, std::find(levels, levels + 4, argv[1]));

	if (i >= 4)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	while (i < 4)
	{
		std::cout << "[" << levels[i] << "]\n";
		harl.complain(levels[i]);
		std::cout << "\n";
		i++;
	}
	return (0);
}