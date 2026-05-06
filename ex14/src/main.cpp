/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:28:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/07 21:43:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

static void	if_file(int argc, char **argv, std::ifstream &filein);

int main(int argc, char **argv)
{
	std::ifstream	filein;
	
	if_file(argc, argv, filein);
	
	std::string		remove(argv[2]);
	std::string 	include(argv[3]);
	std::ofstream	fileout((std::string(argv[1]) + ".replace").c_str());
	
	std::string 	line;
	size_t			pos;

	while (std::getline(filein, line))
	{
		std::string updated_line;
		size_t		pre = 0;

		while (!remove.empty() && (pos = line.find(remove, pre)) != std::string::npos)
		{
			updated_line.append(line.substr(pre, pos - pre));
			updated_line.append(include);
			pre = pos + remove.length();
		}
		updated_line.append(line.substr(pre));
		fileout << updated_line << "\n";
	}
	filein.close();
	fileout.close();
	return (0);
}

static void	if_file(int argc, char **argv, std::ifstream &filein)
{
	if (argc != 4)
	{
		std::cout
			<< "Usage: ./"
			<< argv[0]
			<< " <file> <string_to_remove> <string_to_include>"
			<< std::endl;
		exit(1);
	}

	filein.open(argv[1]);
	if(!filein.is_open())
	{
		std::cerr
			<< "sed: "
			<< argv[1]
			<< ": unable to open file"
			<< std::endl;
		exit(1);
	}
}