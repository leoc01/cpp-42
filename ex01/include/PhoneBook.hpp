/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:42:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/08 20:06:58 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook();

	void	prompt(bool valid);
	void	add();
	void	search();


private:
	
	Contact _contact[8];
	int		_total_add;

	void	_print_details(std::string index);

};
#endif // PHONEBOOK_HPP
