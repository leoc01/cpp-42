/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:49:40 by lbuscaro          #+#    #+#             */
/*   Updated: 2026/05/07 11:49:41 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon ( std::string type ) : _type(type) {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType( void ) const {
	return (_type);
}

void			Weapon::setType( std::string type ) {
	_type = type;
}