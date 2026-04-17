/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Coontact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 13:42:52 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/04/08 20:07:16 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(
	std::string first_name,
	std::string last_name,
	std::string nickname,
	std::string phone_number,
	std::string darkest_secret
) {
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const {
	return (_first_name);
}

std::string Contact::getLastName() const {
	return (_last_name);
}

std::string Contact::getNickname() const {
	return (_nickname);
}

std::string Contact::getPhoneNumber() const {
	return (_phone_number);
}

std::string Contact::getSecret() const {
	return (_darkest_secret);
}