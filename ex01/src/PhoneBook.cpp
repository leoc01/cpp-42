/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:42:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/08 20:07:23 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	safe_input(std::string prompt, std::string& input);
static bool valid_number(std::string number);
static void	print_col(std::string lim, std::string str);

PhoneBook::PhoneBook()
{
	_total_add = 0;
}

void	PhoneBook::prompt(bool valid) {
	std::cout
		<< "\nThe Phone Book: \n Command list:\n"
		<< "- ADD to add a new contact to the phone book.\n"
		<< "- SEARCH to search a contact on the phone book.\n"
		<< "- EXIT to exit and lost all your saved contacts.\n"
		<< "Type a " << ( !valid? "VALID " : "" ) << "command: ";
}

void	PhoneBook::add() {
	std::string fname, lname, nname, pnumber, dsecret;

	std::cout << "\nFill the contact informations:\n";
	safe_input("- First name: ", fname);
	safe_input("- Last name: ", lname);
	safe_input("- Nickname: ", nname);
	do {
		safe_input("- Phone number: ", pnumber);
	} while (!valid_number(pnumber));
	safe_input("- Darkest secret: ", dsecret);
	if (std::cin.eof() == false)
		std::cout << "\n ** Contact saved **\n";
	_contact[_total_add % 8] = Contact(fname, lname, nname, pnumber, dsecret);
	_total_add += 1;
};

void	PhoneBook::search() {
	std::string	index;
	int			i;

	std::cout << "\nContact list:\n";
	for (i = 0; i < 8; i++)
	{
		if (_contact[i].getFirstName().empty())
			break ;
		std::ostringstream oss;
		oss << i + 1;
		if (i == 0)
			std::cout << "     index|first name| last name|  nickname\n";
		print_col("", oss.str());
		print_col("|", _contact[i].getFirstName());
		print_col("|", _contact[i].getLastName());
		print_col("|", _contact[i].getNickname());
		std::cout << std::endl;
	}
	if (!i)
	{
		std::cout << "\n ** No contacts available **\n";
		return ;
	}
	safe_input("\nType the index of a contact and press ENTER: ", index);
	_print_details(index);
};

void	PhoneBook::_print_details(std::string index) {
	int	i;

	std::istringstream(index) >> i;
	i--;
	if (i >= 0 && i <= 7 && !_contact[i].getFirstName().empty())
	{
		std::cout
			<< "\n- First name: " << _contact[i].getFirstName()
			<< "\n- Last name: " << _contact[i].getLastName()
			<< "\n- Nickname: " << _contact[i].getNickname()
			<< "\n- Phone number: " << _contact[i].getPhoneNumber()
			<< "\n- Darkest secret: " << _contact[i].getSecret() << std::endl;
	}
	else if (std::cin.eof() == false)
			std::cout << "\n ** Invalid index. **\n";
}

static void	safe_input(std::string prompt, std::string& input) {
	if (std::cin.eof())
		return ;
	do {
		std::cout << prompt;
		std::getline(std::cin, input);
	} while (input.empty() && std::cin.eof() == false);
}

static bool valid_number(std::string number) {
	for (int i = 0; number[i]; i++)
		if (!std::isdigit(number[i]))
			return (false);
	return (true);
}

static void	print_col(std::string lim, std::string str) {
	int length = str.length();

	if (length > 10)
		str.resize(9);
	std::cout
		<< lim
		<< (length > 10 ? std::setw(9) : std::setw(10))
		<< str
		<< (length > 10 ? "." : "");
}