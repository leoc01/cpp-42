/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:45 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:46 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string name ) : _name(name) , _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack( void ) const {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	_weapon = &weapon;
}