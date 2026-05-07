/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:48:55 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:48:59 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain( std::string level ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = std::distance(levels, std::find(levels, levels + 4, level));

	if (i < 4)
		(this->*f[i])();
}

void	Harl::debug( void ) {
	std::cout
			<< "I love having extra bacon for my "
			<<	"7XL-double-cheese-triple-pickle-special-ketchup burger. "
			<< "I really do!\n";
}

void	Harl::info( void ) {
	std::cout
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!\n";
}

void	Harl::warning( void ) {
	std::cout
		<< "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years, whereas you started working "
		<< "here just last month.\n";
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}