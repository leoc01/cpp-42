/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:49 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:50 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA ( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack( void ) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}