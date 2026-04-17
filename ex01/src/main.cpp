/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:42:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/07 21:43:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phonebook;
	std::string command;
	bool		valid = 1;

	while(std::cin.eof() == false)
	{
		phonebook.prompt(valid);
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (std::cin.eof() == false)
		{
			std::cout << "\n ** Invalid command! **\n";
			valid = 0;
			continue ;
		}
		valid = 1;
	}
	if (std::cin.eof())
		std::cout << "EXIT\n";
}
